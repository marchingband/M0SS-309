#ifndef UART_H
#define UART_H

#include <circle/serial.h>

void uart_init(CSerialDevice *uart_p);
void read_uart();
void uart_write(const u8 *buffer, unsigned count);
void uart_service(void);

#endif
