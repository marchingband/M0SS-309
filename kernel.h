//
// kernel.h
//
#ifndef _kernel_h
#define _kernel_h

#include <circle/actled.h>
#include <circle/koptions.h>
#include <circle/devicenameservice.h>
#include <circle/serial.h>
#include <circle/exceptionhandler.h>
#include <circle/interrupt.h>
#include <circle/timer.h>
#include <circle/gpiopin.h>
#include <circle/logger.h>
#include <circle/types.h>
#include <circle/usb/usbhcidevice.h>
#include <circle/usb/usb.h>
#include <circle/usb/usbmidi.h>
// #include <circle/sound/pwmsounddevice.h>
#include <circle/multicore.h>
#include <circle/memory.h>
#include <circle/sound/i2ssoundbasedevice.h>
#include <sensor/ky040.h>

#include "audio.h"
#include "voiceManager.h"

enum TShutdownMode
{
	ShutdownNone,
	ShutdownHalt,
	ShutdownReboot
};

class CKernel
{
public:
	CKernel (void);
	~CKernel (void);
	boolean Initialize (void);
	TShutdownMode Run (void);
	CPDI2S				*CI2SSoundDevice;

private:
	CActLED				m_ActLED;
	CKernelOptions		m_Options;
	CDeviceNameService	m_DeviceNameService;
	CSerialDevice		m_Serial;
	CExceptionHandler	m_ExceptionHandler;
	CInterruptSystem	m_Interrupt;
	CTimer				m_Timer;
	CLogger				m_Logger;
	CUSBController		*m_pUSB;
	CGPIOManager		m_GPIOManager;
	CKY040			m_RotaryEncoder;
	CUSBMIDIDevice     	*volatile m_pMIDIDevice;
	CVoiceManager		m_VoiceManger;

	static void MIDIPacketHandler (unsigned nCable, u8 *pPacket, unsigned nLength);
	static void USBDeviceRemovedHandler (CDevice *pDevice, void *pContext);
	static void EventHandler (CKY040::TEvent Event, void *pParam);

};

#endif
