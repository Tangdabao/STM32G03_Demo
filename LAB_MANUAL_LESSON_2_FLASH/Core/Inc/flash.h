#ifndef __FLASH_H
#define __FLASH_H

#include "main.h"

#define FLASH_BASE_ADDR    (0x08000000)
#define FLASH_END_ADDR     (0x08010000)

void FLASH_Init(void);
uint8_t FLASH_ReadOneByte(uint32_t add);
uint32_t FLASH_ReadDword(uint32_t add);
void FLASH_ReadnBytes(uint32_t add, uint8_t * p_rbuf, uint32_t nbyte);
#endif
