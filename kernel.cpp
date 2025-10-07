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
#include "uart.h"
#include "buttons.h"

#define DAC_I2C_ADDRESS	0
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
	m_pUSB (new CUSBHCIDevice (&m_Interrupt, &m_Timer, TRUE)), // TRUE: enable plug-and-play
	m_GPIOManager (&m_Interrupt),
	m_RotaryEncoder (KY040_CLK_PIN, KY040_DT_PIN, KY040_SW_PIN, &m_GPIOManager),
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
		CI2SSoundDevice = new CPDI2S(&m_Interrupt);
	}

	led_init();

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
	for(unsigned i=0; i< nLength; i++){
		handle_midi_byte(pPacket[i]);
		// s_pKernel->m_Logger.Write (FromKernel, LogNotice, "%d", pPacket[i]);
		// if(parse(pPacket[i]))
		// {
		// 	u8 *msg = getMidiMsg();
		// 	u8 len = getMidiMsgLen();
		// 	s_pKernel->m_Logger.Write (FromKernel, LogNotice, "got midi message len %d", len);
		// }
	}
}

void CKernel::USBDeviceRemovedHandler (CDevice *pDevice, void *pContext)
{
	s_pKernel->m_Logger.Write (FromKernel, LogNotice, "Lost midi device");
}

void CKernel::EventHandler (CKY040::TEvent Event, void *pParam)
{
	switch (Event){
		case CKY040::EventClockwise:
			handle_encoder(true);
			break;
			case CKY040::EventCounterclockwise:
			handle_encoder(false);
			break;
		default: break;
	}
}

TShutdownMode CKernel::Run (void)
{
	m_Logger.Write (FromKernel, LogNotice, "Compile time: " __DATE__ " " __TIME__);
	m_RotaryEncoder.RegisterEventHandler (EventHandler, this);
	dsp_init(&m_Timer);
	init_midi_parser();
	// m_PWMSoundDevice->Start();
	if (!CI2SSoundDevice->AllocateQueue (QUEUE_SIZE_MSECS))
	{
		m_Logger.Write (FromKernel, LogPanic, "Cannot allocate output sound queue");
	}
	// CI2SSoundDevice->SetWriteFormat (SoundFormatSigned16, 2);
	if(!CI2SSoundDevice->Start())
	{
		m_Logger.Write (FromKernel, LogPanic, "Cannot start sound");
	}

	while(1){
		// main loop
		scan_buttons(&m_Timer);
		process_buttons(&m_Timer);
		render_leds();
		read_uart();
		assert (m_pUSB);
		if (m_pUSB->UpdatePlugAndPlay ())
		{
			m_pMIDIDevice = (CUSBMIDIDevice *) CDeviceNameService::Get ()->GetDevice ("umidi1", FALSE);
			if (m_pMIDIDevice != 0)
			{
				m_Logger.Write (FromKernel, LogNotice, "Found midi device");
				s_pKernel = this;
				m_pMIDIDevice->RegisterPacketHandler (MIDIPacketHandler);
				m_pMIDIDevice->RegisterRemovedHandler (USBDeviceRemovedHandler);
			}
		}
		m_Timer.MsDelay(5);
	}
	
	// 	assert (m_pUSB);
	// 	if (m_pUSB->UpdatePlugAndPlay ())
	// 	{
	// 		m_pMIDIDevice = (CUSBMIDIDevice *) CDeviceNameService::Get ()->GetDevice ("umidi1", FALSE);
	// 		if (m_pMIDIDevice != 0)
	// 		{
	// 			m_Logger.Write (FromKernel, LogNotice, "Found midi device");
	// 			s_pKernel = this;
	// 			m_pMIDIDevice->RegisterPacketHandler (MIDIPacketHandler);
	// 			m_pMIDIDevice->RegisterRemovedHandler (USBDeviceRemovedHandler);
	// 		}
	// 	}
	// 	m_Timer.MsDelay(500);
	// }

	return ShutdownHalt;
}