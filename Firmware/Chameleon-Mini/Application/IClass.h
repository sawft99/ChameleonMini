/*
 * IClass.c
 *
 *  Created on: 17-05-2020
 *      Author: NVX
 */

#ifndef ICLASS_H_
#define ICLASS_H_

#include "Application.h"

#define ICLASS_BLOCK_SIZE      8
#define ICLASS_CSN_SIZE        ICLASS_BLOCK_SIZE
#define ICLASS_BLOCK_NUM       32
#define ICLASS_MEM_SIZE        ( ICLASS_BLOCK_SIZE * ICLASS_BLOCK_NUM )
#define ICLASS_READ4_SIZE      ( ICLASS_BLOCK_SIZE * 4 )

void IClassAppInit(void);
void IClassAppReset(void);
void IClassDetectionInit(void);
uint16_t IClassAppProcess(uint8_t *FrameBuf, uint16_t FrameBytes);
void IClassGetCsn(ConfigurationUidType Uid);
void IClassSetCsn(const ConfigurationUidType Uid);

#endif /* ICLASS_H_ */
