//=======================================================================
//PROJECT	: STM32F101VC IAP TEMPLATE
//PROCESSOR : STM32F101VCT6(SRAM=32KB,FLASH=256KB)
//COMPILER	: IAR EWARM v5.50
//AUTHOR	: Kim Young-Sam(tomkim@mamiel.com)
//UPDATE	: [S]2010.08.01~[E]2010.08.18
//FUNCTION	: 
//=======================================================================

#ifndef __TYPEDEF_H
#define __TYPEDEF_H

typedef uint32_t  u32;
typedef uint16_t u16;
typedef uint8_t  u8;

typedef volatile uint32_t  vu32;
typedef volatile uint16_t vu16;
typedef volatile uint8_t  vu8;

typedef union {
	u32 DATA;
	u8  DAT[4];
} U32DAT;

typedef union {
	vu8 DATA;
	struct {
		volatile unsigned b0:1;
		volatile unsigned b1:1;
		volatile unsigned b2:1;
		volatile unsigned b3:1;
		volatile unsigned b4:1;
		volatile unsigned b5:1;
		volatile unsigned b6:1;
		volatile unsigned b7:1;
	} Bit;
} SFR08;


typedef union {
	vu16 DATA;
	struct {
		volatile unsigned b0:1;
		volatile unsigned b1:1;
		volatile unsigned b2:1;
		volatile unsigned b3:1;
		volatile unsigned b4:1;
		volatile unsigned b5:1;
		volatile unsigned b6:1;
		volatile unsigned b7:1;
		volatile unsigned b8:1;
		volatile unsigned b9:1;
		volatile unsigned b10:1;
		volatile unsigned b11:1;
		volatile unsigned b12:1;
		volatile unsigned b13:1;
		volatile unsigned b14:1;
		volatile unsigned b15:1;
	} Bit;
} SFR16;
typedef union {
	vu32 DATA;
	struct {
		volatile unsigned b0:1; 
		volatile unsigned b1:1; 
		volatile unsigned b2:1; 
		volatile unsigned b3:1; 
		volatile unsigned b4:1; 
		volatile unsigned b5:1; 
		volatile unsigned b6:1; 
		volatile unsigned b7:1; 
		volatile unsigned b8:1; 
		volatile unsigned b9:1; 
		volatile unsigned b10:1;
		volatile unsigned b11:1;
		volatile unsigned b12:1;
		volatile unsigned b13:1;
		volatile unsigned b14:1;
		volatile unsigned b15:1;
		volatile unsigned b16:1; 
		volatile unsigned b17:1; 
		volatile unsigned b18:1; 
		volatile unsigned b19:1; 
		volatile unsigned b20:1; 
		volatile unsigned b21:1; 
		volatile unsigned b22:1; 
		volatile unsigned b23:1; 
		volatile unsigned b24:1; 
		volatile unsigned b25:1; 
		volatile unsigned b26:1;
		volatile unsigned b27:1;
		volatile unsigned b28:1;
		volatile unsigned b29:1;
		volatile unsigned b30:1;
		volatile unsigned b31:1;
	} Bit;
} SFR32;
typedef union {
	u32 DATA;
	struct {
		unsigned b0:1; 
		unsigned b1:1; 
		unsigned b2:1; 
		unsigned b3:1; 
		unsigned b4:1; 
		unsigned b5:1; 
		unsigned b6:1; 
		unsigned b7:1; 
		unsigned b8:1; 
		unsigned b9:1; 
		unsigned b10:1;
		unsigned b11:1;
		unsigned b12:1;
		unsigned b13:1;
		unsigned b14:1;
		unsigned b15:1;
		unsigned b16:1; 
		unsigned b17:1; 
		unsigned b18:1; 
		unsigned b19:1; 
		unsigned b20:1; 
		unsigned b21:1; 
		unsigned b22:1; 
		unsigned b23:1; 
		unsigned b24:1; 
		unsigned b25:1; 
		unsigned b26:1;
		unsigned b27:1;
		unsigned b28:1;
		unsigned b29:1;
		unsigned b30:1;
		unsigned b31:1;
	} Bit;
} FLAG32;

typedef union {
	u8 DATA;
	struct {
		unsigned b0:1; 
		unsigned b1:1; 
		unsigned b2:1; 
		unsigned b3:1; 
		unsigned b4:1; 
		unsigned b5:1; 
		unsigned b6:1; 
		unsigned b7:1; 
	} Bit;
} FLAG08;


typedef  void (*pFunction)(void);
typedef  uint32_t CPU_SR;

#define  ENTER_CRITICAL()  {cpu_sr = __get_PRIMASK(); __disable_irq();}
#define  EXIT_CRITICAL()   {__set_PRIMASK(cpu_sr);}


#endif



