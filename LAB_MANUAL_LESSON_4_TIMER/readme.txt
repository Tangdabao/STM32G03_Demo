/**
  ******************************************************************************
  * STM32G031 DEMO Timer
  ******************************************************************************
  * @author Tyler Don
  * @file   main.c
  * @brief  Main program
  *	        
  *
  * @see    Please refer to README for detailed information.
  ******************************************************************************
  * Copyright (c) 2019 Tyler Don
  ******************************************************************************
**/

//***********************************************************************//
STM32G031K8
STM32G031 一共8个Timer：
- 高级定时器Timer 1 ->最大能达到128Mhz主频
- 通用定时器Timer 2/3/4/16/17 ->最大主频到64Mhz
- 低功耗定时器Lowpower LPTIM1/LPTIM2 - 最大主频64Mhz

本实验实现的为128Mhz的Tim1用于1s定时更新
Time的使用源来源于两个TIMPCLK&PLLQCLK
但是128MHZ的时钟只能来源于PLLQCLK，TIMPCLK最大64Mhz（Cubemx的GUI是错误的）
因此在配置的时候，只能把来源配置为PLLQCLK
坑：在使用时配置了TIMPCLK，Cubemx配置之后不会报错，但是实际芯片不能工作在64Mhz的情况下
	PLLQCLK的分频是来自源RCC_OscInitStruct.PLL.PLLQ ，我在使用代码配置的时候使用了R，因此不管用


