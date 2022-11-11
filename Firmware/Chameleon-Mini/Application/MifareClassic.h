/*
 * MifareClassic.h
 *
 *  Created on: 13.05.2013
 *      Author: skuser
 */

#ifndef MIFARECLASSIC_H_
#define MIFARECLASSIC_H_

#include "Application.h"
#include "ISO14443-3A.h"

#define MIFARE_CLASSIC_UID_SIZE       ISO14443A_UID_SIZE_SINGLE
#define MIFARE_CLASSIC_MINI_MEM_SIZE  320
#define MIFARE_CLASSIC_1K_MEM_SIZE    1024
#define MIFARE_CLASSIC_4K_MEM_SIZE    4096

extern bool DetectionMode;
void DetectionLogToFlash(uint8_t Entry, const void *Data, uint8_t Length);

void DetectionInit(void);
void DetectionLogClear(void);
void MifareDetectionInit1K(void);
void MifareDetectionInit4K(void);
void MifareClassicAppInitMini4B(void);
void MifareClassicAppInit1K(void);
void MifareClassicAppInit4K(void);
void MifareClassicAppInit1K7B(void);
void MifareClassicAppInit4K7B(void);
void MifareClassicAppReset(void);
void MifareClassicAppTask(void);

uint16_t MifareClassicAppProcess(uint8_t *Buffer, uint16_t BitCount);

void MifareClassicGetUid(ConfigurationUidType Uid);
void MifareClassicSetUid(ConfigurationUidType Uid);

void MifareClassicGetAtqa(uint16_t * Atqa);
void MifareClassicSetAtqa(uint16_t Atqa);
void MifareClassicGetSak(uint8_t * Sak);
void MifareClassicSetSak(uint8_t Sak);

#endif /* MIFARECLASSIC_H_ */
