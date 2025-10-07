#include <circle/logger.h>
#include <circle/util.h>
#include <circle/timer.h>
#include "strings.h"
#include <circle/serial.h>

#include "midi.h"

static CSerialDevice *uart;

static u8 Buffer[256];

void uart_init(CSerialDevice *uart_p){
    uart = uart_p;
    // uart->Initialize(115200);
    uart->Initialize(31250);
}

void read_uart(){
		int nResult = uart->Read (Buffer, sizeof Buffer);
		for (int i = 0; i < nResult; i++)
		{
			handle_midi_byte(Buffer[i]);
			// m_Logger.Write (FromKernel, LogNotice, "midi");
		}
}
