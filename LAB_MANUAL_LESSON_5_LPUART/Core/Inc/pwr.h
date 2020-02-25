#ifndef __pwr_H
#define __pwr_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */
typedef enum
{
  RUN= 0U,
	LOW_POWER_RUN= 1U,
	LOW_POWER= 2U,
	SLEEP= 3U,
	LOW_POWER_SLEEP= 4U,
	STOP0= 5U,
	STOP1= 6U,
  STANDBY= 7U,
	SHUT_DOWN
} PWR_Mcu_State;
/* USER CODE END Private defines */


/* USER CODE BEGIN Prototypes */
void MX_PWR_Init(PWR_Mcu_State PwrState, uint8_t STOPEntry);
void MX_PWR_GPIO_Init(void);
void MX_PWR_SystemClock_Init(void);
void MX_PWR_SystemClock_fromSTOP(void);
/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ pinoutConfig_H */
