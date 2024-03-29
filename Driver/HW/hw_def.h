/*
 * hw_def.h
 *
 *  Created on: Dec 6, 2020
 *      Author: baram
 */

#ifndef SRC_HW_HW_DEF_H_
#define SRC_HW_HW_DEF_H_


#include <COMMON/def.h>
#include "bsp.h"


#define _USE_HW_FLASH
#define _USE_HW_SLEEP
#define _USE_HW_RESET
#define _USE_HW_SPI_FLASH


#define _USE_HW_LED
#define      HW_LED_MAX_CH          4 // 5

#define _USE_HW_BLEUART
#define      HW_BLEUART_MAX_BUF_LEN 1024

#define _USE_HW_UART
#define      HW_UART_MAX_CH         2

#define _USE_HW_CLI
#define      HW_CLI_CMD_LIST_MAX    24
#define      HW_CLI_CMD_NAME_MAX    16
#define      HW_CLI_LINE_HIS_MAX    4
#define      HW_CLI_LINE_BUF_MAX    64

#define _USE_HW_LOG
#define      HW_LOG_CH              _DEF_UART2

#define _USE_HW_SWTIMER
#define      HW_SWTIMER_MAX_CH      8

#define _USE_HW_BUTTON
#define      HW_BUTTON_MAX_CH       4 //5

#define _USE_HW_ADC
#define      HW_ADC_MAX_CH          3

#define _USE_HW_TIMER
#define      HW_TIMER_MAX_CH        1

#define _USE_HW_FS
#define      HW_FS_MAX_SIZE         (32*1024)

#define _USE_HW_GPIO
#define      HW_GPIO_MAX_CH         1


#define _USE_PPI_ADC_0              0
#define _USE_PPI_ADC_1              1

#define _USE_TIMER_TIMER_0          NRF_TIMER1


#define _PIN_GPIO_SPI_FLASH_CS      0


#endif /* SRC_HW_HW_DEF_H_ */
