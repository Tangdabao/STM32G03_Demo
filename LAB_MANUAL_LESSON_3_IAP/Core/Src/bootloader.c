#include "bootloader.h"

typedef void (*pFunction)(void);            /*!< Function pointer definition */

/**
  * @brief  This function performs the jump to the MCU System Memory (ST
  *         Bootloader).
  * @details The function carries out the following operations:
  *  - De-initialize the clock and peripheral configuration
  *  - Stop the systick
  *  - Remap the system flash memory
  *  - Perform the jump
  * @param  None
  * @retval None
*/
void Bootloader_JumpToSysMem(void)
{
    uint32_t  JumpAddress = *(__IO uint32_t*)(SYSMEM_ADDRESS + 4);
    pFunction Jump = (pFunction)JumpAddress;

    HAL_RCC_DeInit();
    HAL_DeInit();

    SysTick->CTRL = 0;
    SysTick->LOAD = 0;
    SysTick->VAL  = 0;

    __HAL_RCC_SYSCFG_CLK_ENABLE();
    __HAL_SYSCFG_REMAPMEMORY_SYSTEMFLASH();

    __set_MSP(*(__IO uint32_t*)SYSMEM_ADDRESS);
    Jump();

    while(1);
}

