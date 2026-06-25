#include <circle/logger.h>
#include <circle/spinlock.h>
#include <circle/util.h>
#include <circle/timer.h>
#include "strings.h"
#include <circle/serial.h>

#include "midi.h"

static CSerialDevice *uart;

static u8 Buffer[256];
static u8 TxQueue[512];
static unsigned TxHead = 0;
static unsigned TxTail = 0;
static CSpinLock TxQueueLock(IRQ_LEVEL);

void uart_init(CSerialDevice *uart_p){
    uart = uart_p;
    // uart->Initialize(115200);
    uart->Initialize(31250);
    uart->SetOptions(uart->GetOptions() & ~SERIAL_OPTION_ONLCR);
}

void uart_write(const u8 *buffer, unsigned count)
{
    if (uart == 0 || buffer == 0 || count == 0) {
        return;
    }

    TxQueueLock.Acquire();
    for (unsigned i = 0; i < count; i++) {
        unsigned next = (TxTail + 1) % sizeof(TxQueue);
        if (next == TxHead) {
            break;
        }
        TxQueue[TxTail] = buffer[i];
        TxTail = next;
    }
    TxQueueLock.Release();
}

void uart_service(void)
{
    if (uart == 0) {
        return;
    }

    u8 local[64];
    unsigned count = 0;

    TxQueueLock.Acquire();
    while (TxHead != TxTail && count < sizeof(local)) {
        local[count++] = TxQueue[TxHead];
        TxHead = (TxHead + 1) % sizeof(TxQueue);
    }
    TxQueueLock.Release();

    if (count > 0) {
        uart->Write(local, count);
    }
}

void read_uart(){
		int nResult = uart->Read (Buffer, sizeof Buffer);
		if (nResult > 0)
		{
			uart_write(Buffer, nResult);
		}
		for (int i = 0; i < nResult; i++)
		{
			handle_midi_byte(Buffer[i]);
			// m_Logger.Write (FromKernel, LogNotice, "midi");
		}
}
