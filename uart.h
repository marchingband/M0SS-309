#ifndef UART_H
#define UART_H

#include <circle/serial.h>

void uart_init(CSerialDevice *uart_p);
void read_uart();

#endif