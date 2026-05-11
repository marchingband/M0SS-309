//
// kernel.cpp
//

#include "kernel.h"
#include <assert.h>
#include <circle/util.h>
#include <circle/machineinfo.h>
#include <circle/debug.h>
#include <circle/usb/usbhcidevice.h>
#include <circle/usb/usbmidi.h>
#include <circle/memory.h>
#include <circle/multicore.h>
#include <circle/sound/i2ssoundbasedevice.h>
#include <circle/sound/soundbasedevice.h>
#include <circle/gpiopin.h>


#include "midiXparser.h"
#include "audio.h"
#include "midi.h"
#include "voiceManager.h"
#include "buttons.h"
#include "dsp.h"
#include "led.h"
#include "midi_config.h"
#include "preset_store.h"
#include "uart.h"
#include "buttons.h"

#define DAC_I2C_ADDRESS	0
#define DRIVE PRESET_DRIVE
#define QUEUE_SIZE_MSECS 1000
#define KY040_CLK_PIN	22
#define KY040_DT_PIN	23
#define KY040_SW_PIN	24

static const char FromKernel[] = "kernel";

static CKernel *s_pKernel = nullptr;

CKernel::CKernel (void)
:	
	m_Timer (&m_Interrupt),
	m_Logger (m_Options.GetLogLevel (), &m_Timer),
	m_EMMC (&m_Interrupt, &m_Timer, &m_ActLED),
	m_pUSB (new CUSBHCIDevice (&m_Interrupt, &m_Timer, TRUE)), // TRUE: enable plug-and-play
	m_GPIOManager (&m_Interrupt),
	// m_RotaryEncoder (KY040_CLK_PIN, KY040_DT_PIN, KY040_SW_PIN, &m_GPIOManager),
	m_RotaryEncoder (KY040_CLK_PIN, KY040_DT_PIN, KY040_SW_PIN, 0),
	m_VoiceManger(CMemorySystem::Get ()),
	m_Serial(&m_Interrupt, false)
{
	// m_ActLED.Blink (1);	// show we are alive
}

CKernel::~CKernel (void)
{
}

boolean CKernel::Initialize (void)
{
	boolean bOK = TRUE;

	if (bOK)
	{
		uart_init(&m_Serial);
		// bOK = m_Serial.Initialize (115200);
		// bOK = m_Serial.Initialize (31250);
	}

	if (bOK)
	{
		bOK = m_Logger.Initialize (&m_Serial);
	}

	led_init();

	if (bOK)
	{
		bOK = m_Interrupt.Initialize ();
	}

	if (bOK)
	{
		bOK = m_Timer.Initialize ();
	}

	if (bOK)
	{
		bOK = m_EMMC.Initialize ();
	}

	if (bOK)
	{
		if (f_mount (&m_FileSystem, DRIVE, 1) != FR_OK)
		{
			m_Logger.Write (FromKernel, LogPanic, "Cannot mount drive: %s", DRIVE);
			bOK = FALSE;
		}
	}

	if (bOK)
	{
		midi_config_init(&m_FileSystem);
		preset_store_init(&m_FileSystem);
	}

	if (bOK)
	{
		assert (m_pUSB);
		bOK = m_pUSB->Initialize ();
	}

	if (bOK)
	{
		bOK = m_GPIOManager.Initialize ();
	}

	if (bOK)
	{
		bOK = m_RotaryEncoder.Initialize ();
	}
	
	if (bOK)
	{
		// m_PWMSoundDevice = new CPDPWM(&m_Interrupt);
		CI2SSoundDevice = new CPDI2S(&m_Interrupt, &m_RotaryEncoder);
	}

	// led_init();

	// if (bOK)
	// {
	// 	bOK = m_LEDStripe.Initialize ();
	// }

	if (bOK)
	{
		bOK = m_VoiceManger.Initialize ();
	}

	return bOK;
}

void CKernel::MIDIPacketHandler (unsigned nCable, u8 *pPacket, unsigned nLength)
{
	if (nLength > 0) {
		uart_write(pPacket, nLength);
	}

	for(unsigned i=0; i< nLength; i++){
		handle_midi_byte(pPacket[i]);
	}
}

void CKernel::USBDeviceRemovedHandler (CDevice *pDevice, void *pContext)
{
	s_pKernel->m_Logger.Write (FromKernel, LogNotice, "Lost midi device");
}

void CKernel::EventHandler (CKY040::TEvent Event, void *pParam)
{
	CKernel *pThis = static_cast<CKernel *>(pParam);
	u64 now = pThis->m_Timer.GetClockTicks64();
	switch (Event){
		case CKY040::EventClockwise:
			handle_encoder(true, now);
			break;
		case CKY040::EventCounterclockwise:
			handle_encoder(false, now);
			break;
		default: break;
	}
}

TShutdownMode CKernel::Run (void)
{
	m_Logger.Write (FromKernel, LogNotice, "Compile time: " __DATE__ " " __TIME__);
	m_RotaryEncoder.RegisterEventHandler (EventHandler, this);
	dsp_init(&m_Timer);
	preset_store_finalize_boot_defaults();
	init_midi_parser();
	if (!CI2SSoundDevice->AllocateQueue (QUEUE_SIZE_MSECS)){
		m_Logger.Write (FromKernel, LogPanic, "Cannot allocate output sound queue");
	}
	if(!CI2SSoundDevice->Start()){
		m_Logger.Write (FromKernel, LogPanic, "Cannot start sound");
	}
	stopSplash();

	while(1){
		// main loop
		scan_buttons(&m_Timer);
		process_buttons(&m_Timer);
		midi_config_service(m_Timer.GetClockTicks64());
		// render_leds();
		read_uart();
		uart_service();
		assert (m_pUSB);
		if (m_pUSB->UpdatePlugAndPlay ()){
			m_pMIDIDevice = (CUSBMIDIDevice *) CDeviceNameService::Get ()->GetDevice ("umidi1", FALSE);
			if (m_pMIDIDevice != 0)
			{
				m_Logger.Write (FromKernel, LogNotice, "Found midi device");
				s_pKernel = this;
				m_pMIDIDevice->RegisterPacketHandler (MIDIPacketHandler);
				m_pMIDIDevice->RegisterRemovedHandler (USBDeviceRemovedHandler);
			}
		}
		m_RotaryEncoder.Update();
		// m_Timer.MsDelay(2);
	}

	return ShutdownHalt;
}
