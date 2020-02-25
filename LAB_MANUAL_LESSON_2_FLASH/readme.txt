/**
  ******************************************************************************
  * STM32G031 DEMO Template
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
Flash£º64Kbyte SRAM£º8kbyte

0x2000 2000    /---------------------\
					    RAM£¨8kByte£©
0x2000 0000	   /---------------------\


0x1FFF 7FFF    /---------------------\
					Option bytes(2KBytes)
0x1FFF 7800	   /---------------------\


0x0801 0000    /---------------------\
					   Flash£¨64Kbytes£©
0x0800 0000	   /---------------------\

//***********************************************************************//
Flash£º64Kbyte
Page size£º2kbytes  Total£º32pages
Subpage size£º512bytes  £¨each page with eight rows of 256bytes.£©

//***********************************************************************//
Read £º72-bit wide data read (64bits plus 8 ECC bits) :8bytes
Write:72-bit wide data write (64bits plus 8 ECC bits) :8bytes
Erase£ºPage erase (2Kbytes), and mass erase
