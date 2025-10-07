#ifndef MIDIXPARSER_H
#define MIDIXPARSER_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stdint.h"

void init_midi_parser(void);
bool parse(uint8_t readByte);
uint8_t * getMidiMsg(void);
uint8_t  getMidiMsgLen(void);


#ifdef __cplusplus
}
#endif

#endif