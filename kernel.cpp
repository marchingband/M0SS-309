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
#include <circle/spinlock.h>


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
static constexpr unsigned MIDI_QUEUE_SIZE = 1024;
static u8 s_MIDIQueue[MIDI_QUEUE_SIZE];
static volatile unsigned s_MIDIQueueHead = 0;
static volatile unsigned s_MIDIQueueTail = 0;
static CSpinLock s_MIDIQueueLock(FIQ_LEVEL);

static void QueueMIDIBytes(const u8 *pData, unsigned nLength)
{
	if (pData == 0 || nLength == 0) {
		return;
	}

	s_MIDIQueueLock.Acquire();
	for (unsigned i = 0; i < nLength; i++) {
		unsigned next = (s_MIDIQueueTail + 1) % MIDI_QUEUE_SIZE;
		if (next == s_MIDIQueueHead) {
			break;
		}
		s_MIDIQueue[s_MIDIQueueTail] = pData[i];
		s_MIDIQueueTail = next;
	}
	s_MIDIQueueLock.Release();
}

static void ClearMIDIQueue(void)
{
	s_MIDIQueueLock.Acquire();
	s_MIDIQueueHead = 0;
	s_MIDIQueueTail = 0;
	s_MIDIQueueLock.Release();
}

static void ProcessQueuedMIDI(void)
{
	while (true) {
		u8 byte = 0;

		s_MIDIQueueLock.Acquire();
		if (s_MIDIQueueHead == s_MIDIQueueTail) {
			s_MIDIQueueLock.Release();
			break;
		}
		byte = s_MIDIQueue[s_MIDIQueueHead];
		s_MIDIQueueHead = (s_MIDIQueueHead + 1) % MIDI_QUEUE_SIZE;
		s_MIDIQueueLock.Release();
		uart_write(&byte, 1);
		handle_midi_byte(byte);
	}
}

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
	QueueMIDIBytes(pPacket, nLength);
}

void CKernel::USBDeviceRemovedHandler (CDevice *pDevice, void *pContext)
{
	ClearMIDIQueue();
	init_midi_parser();
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
	midi_apply_global_config();
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
		midi_service_steals();
		ProcessQueuedMIDI();
		midi_service_steals();
		scan_buttons(&m_Timer);
		process_buttons(&m_Timer);
		int reset_request = get_reset_request();
		if (reset_request != RESET_REQUEST_NONE) {
			if (reset_request == RESET_REQUEST_FACTORY) {
				m_Logger.Write (FromKernel, LogNotice, "factory reset requested");
				bool presets_ok = preset_store_factory_reset();
				bool config_ok = midi_config_factory_reset();
				m_Logger.Write (
					FromKernel,
					(presets_ok && config_ok) ? LogNotice : LogWarning,
					"factory reset storage result presets=%u config=%u",
					presets_ok ? 1U : 0U,
					config_ok ? 1U : 0U);
			} else {
				m_Logger.Write (FromKernel, LogNotice, "reset requested");
			}
			return ShutdownReboot;
		}
		u64 nNow = m_Timer.GetClockTicks64();
		midi_config_service(nNow);
		// render_leds();
		read_uart();
		uart_service();
			assert (m_pUSB);
			if (m_pUSB->UpdatePlugAndPlay ()){
				m_pMIDIDevice = (CUSBMIDIDevice *) CDeviceNameService::Get ()->GetDevice ("umidi1", FALSE);
				if (m_pMIDIDevice != 0)
				{
					m_Logger.Write (FromKernel, LogNotice, "Found midi device");
					ClearMIDIQueue();
					init_midi_parser();
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
