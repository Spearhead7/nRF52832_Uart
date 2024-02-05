
#ifndef __BSPDEF_H
#define __BSPDEF_H

/*
#define PORTA		((SFR16*)(GPIOA_BASE+0x0C))
#define PORTB		((SFR16*)(GPIOB_BASE+0x0C))
#define PORTC		((SFR16*)(GPIOC_BASE+0x0C))
#define PORTD		((SFR16*)(GPIOD_BASE+0x0C))
#define PORTE		((SFR16*)(GPIOE_BASE+0x0C))
#define DDRAL		((SFR32*)(GPIOA_BASE+0x00)) //Bit7~0
#define DDRBL		((SFR32*)(GPIOB_BASE+0x00)) //Bit7~0
#define DDRCL		((SFR32*)(GPIOC_BASE+0x00)) //Bit7~0
#define DDREL		((SFR32*)(GPIOE_BASE+0x00)) //Bit7~0
#define PINA		((SFR32*)(GPIOA_BASE+0x08))
#define PINB		((SFR32*)(GPIOB_BASE+0x08))
#define PINC		((SFR32*)(GPIOC_BASE+0x08))
#define PIND		((SFR32*)(GPIOD_BASE+0x08))
#define PINE		((SFR32*)(GPIOE_BASE+0x08))
*/

#define P0_SET			((SFR32*)(NRF_P0_BASE+0x508))
#define P0_CLR			((SFR32*)(NRF_P0_BASE+0x50C))

#define LED1_ON_PT		P0_CLR->Bit.b17
#define LED1_OFF_PT		P0_SET->Bit.b17

#endif
