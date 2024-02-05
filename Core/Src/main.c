/*
 * main.c
 *
 *  Created on: 2021. 5. 13.
 *      Author: baram
 */


#include "Includes.h"

static void apInit(void);
static void Variable_Init_Main(void);
char Tmp_Buff[50];
//==================================================================================
//
//==================================================================================
int main(void) {
uint32_t pre_time;
button_obj_t btn;
uint16_t     btn_count = 0;
//u8 Test_Cnt=0;

	Variable_Init_Main();

	hwInit();
	apInit();

	buttonObjCreate(&btn, 0, 200);
	pre_time = millis();
	while(1) {
		if (millis()-pre_time >= 1000) {
			pre_time = millis();
			/*
			if(TEST0_FG^=1) {
				LED1_ON_PT=1;
			} else {
				LED1_OFF_PT=1;
			}
			*/
			ledToggle(_DEF_LED1);

			/*
			if(bleUartIsConnect()) {
				sprintf(Tmp_Buff,"Test_Cnt=%02d",Test_Cnt++);
				if(bleUartAvailable()>0) {
					bleUartWrite((uint8_t *)Tmp_Buff,sizeof(Tmp_Buff));
					//bleUartWrite((uint8_t *)"Spearhead",9);
				}
			}
			*/
			//uartPrintf(_DEF_UART2,"Kim Young Sam\r\n");
		}
		cliMain();

		if (buttonObjGetClicked(&btn, 60) == true) {
			btn_count++;
			logPrintf("ButtonClicked %d\r\n", btn_count);
		}
	}
	return 0;
}

//==================================================================================
void ledISR(void *args) {
  ledToggle(_DEF_LED3);
}

//==================================================================================
void apInit(void) {
  swtimer_handle_t h_led;

  cliOpen(_DEF_UART2, 57600);

  h_led = swtimerGetHandle();
  swtimerSet(h_led, 1000, LOOP_TIME, ledISR, NULL);
  swtimerStart(h_led);
}

void Variable_Init_Main(void) {
	USRFG0.DATA=0;
}
