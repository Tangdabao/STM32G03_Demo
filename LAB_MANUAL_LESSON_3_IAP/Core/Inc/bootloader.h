#ifndef __bootloader_H
#define __bootloader_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"
/** Address of System Memory (ST Bootloader) */
#define SYSMEM_ADDRESS          (uint32_t)0x1FFF0000

void Bootloader_JumpToSysMem(void);

#ifdef __cplusplus
}
#endif
#endif /*__ pinoutConfig_H */

