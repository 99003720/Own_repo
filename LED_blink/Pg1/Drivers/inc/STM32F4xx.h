// MCU specific header file
#include <stdint.h>
//macros for different memories

#define SRAM1 				0x20000000U
#define SRAM2 				0x2001C000U
#define FLASH_MEM 			0x08000000U
#define ROM 				0x1FFF0000U
#define MEM_RCC 			0x40023800U

//macros for different bus system
#define BUS_BASE_ADDR 		0x40000000U
#define APB1_BASE_ADDR 		0x40000000U
#define APB2_BASE_ADDR 		0x40010000U
#define AHB1_BASE_ADDR 		0x40020000U
#define AHB2_BASE_ADDR 		0x50000000U
#define AHB3_BASE_ADDR 		0xA0000000U

//macros for GPIOs
//0x40020000U
#define GPIOA_BASE_ADDR 	(AHB1_BASE_ADDR + 0x00)
#define GPIOB_BASE_ADDR 	(AHB1_BASE_ADDR + 0x04)
#define GPIOC_BASE_ADDR 	(AHB1_BASE_ADDR + 0x08)
#define GPIOD_BASE_ADDR 	(AHB1_BASE_ADDR + 0x0C)
#define GPIOE_BASE_ADDR 	(AHB1_BASE_ADDR + 0x10)
#define GPIOF_BASE_ADDR 	(AHB1_BASE_ADDR + 0x14)
#define GPIOG_BASE_ADDR 	(AHB1_BASE_ADDR + 0x18)
#define GPIOH_BASE_ADDR 	(AHB1_BASE_ADDR + 0x1C)
#define GPIOI_BASE_ADDR 	(AHB1_BASE_ADDR + 0x20)
#define GPIOJ_BASE_ADDR 	(AHB1_BASE_ADDR + 0x24)
#define GPIOK_BASE_ADDR 	(AHB1_BASE_ADDR + 0x28)


//MACROS FOR PERIPHERALS hanging on to APB1
//0x40000000U
#define TIM2_BASE_ADDR    	(APB1_BASE_ADDR + 0x00)
#define TIM3_BASE_ADDR    	(APB1_BASE_ADDR + 0x04)
#define TIM4_BASE_ADDR    	(APB1_BASE_ADDR + 0x08)
#define TIM5_BASE_ADDR    	(APB1_BASE_ADDR + 0x0C)
#define TIM6_BASE_ADDR    	(APB1_BASE_ADDR + 0x10)
#define TIM7_BASE_ADDR    	(APB1_BASE_ADDR + 0x14)
#define TIM12_BASE_ADDR   	(APB1_BASE_ADDR + 0x18)
#define TIM13_BASE_ADDR   	(APB1_BASE_ADDR + 0x1C)
#define TIM14_BASE_ADDR   	(APB1_BASE_ADDR + 0x20)
#define USART2_BASE_ADDR  	(APB1_BASE_ADDR + 0x44)
#define USART3_BASE_ADDR  	(APB1_BASE_ADDR + 0x48)
#define UART4_BASE_ADDR   	(APB1_BASE_ADDR + 0x4C)
#define UART5_BASE_ADDR   	(APB1_BASE_ADDR + 0x50)
#define I2C1_BASE_ADDR    	(APB1_BASE_ADDR + 0x54)
#define I2C2_BASE_ADDR 	  	(APB1_BASE_ADDR + 0x58)
#define I2C3_BASE_ADDR 		(APB1_BASE_ADDR + 0x5C)
#define CAN1_BASE_ADDR 		(APB1_BASE_ADDR + 0x64)
#define CAN2_BASE_ADDR 		(APB1_BASE_ADDR + 0x68)
#define PWR_BASE_ADDR 		(APB1_BASE_ADDR + 0x70)
#define DAC_BASE_ADDR 		(APB1_BASE_ADDR + 0x74)
#define RTC_BKP_BASE_ADDR 	(APB1_BASE_ADDR + 0x28)
#define WWDG_BASE_ADDR 		(APB1_BASE_ADDR + 0x2C)
#define IWDG_BASE_ADDR 		(APB1_BASE_ADDR + 0x30)
#define I2S2EXT_BASE_ADDR 	(APB1_BASE_ADDR + 0x34)
#define SPI2_BASE_ADDR 		(APB1_BASE_ADDR + 0x38)
#define SPI3_BASE_ADDR 		(APB1_BASE_ADDR + 0x3C)
#define UART8_BASE_ADDR 	(APB1_BASE_ADDR + 0x7C)
#define UART7_BASE_ADDR 	(APB1_BASE_ADDR + 0x78)

//MACROS for peripherals hanging onto APB2
//0x40010000U
#define TIM1_BASE_ADDR        	(APB2_BASE_ADDR + 0x0000)
#define TIM8_BASE_ADDR        	(APB2_BASE_ADDR + 0x0400)
#define USART1_BASE_ADDR    	(APB2_BASE_ADDR + 0x1000)
#define USART6_BASE_ADDR    	(APB2_BASE_ADDR + 0x1400)
#define ADC_BASE_ADDR        	(APB2_BASE_ADDR + 0x2000)
#define SDIO_BASE_ADDR        	(APB2_BASE_ADDR + 0x2C00)
#define SPI1_BASE_ADDR        	(APB2_BASE_ADDR + 0x3000)
#define SPI4_BASE_ADDR        	(APB2_BASE_ADDR + 0x3400)
#define SYSCFG_BASE_ADDR    	(APB2_BASE_ADDR + 0x3800)
#define EXTI_BASE_ADDR        	(APB2_BASE_ADDR + 0x3C00)
#define TIM9_BASE_ADDR        	(APB2_BASE_ADDR + 0x4000)
#define TIM10_BASE_ADDR        	(APB2_BASE_ADDR + 0x4400)
#define TIME11_BASE_ADDR    	(APB2_BASE_ADDR + 0x4800)
#define SPI5_BASE_ADDR        	(APB2_BASE_ADDR + 0x5000)
#define SPI6_BASE_ADDR        	(APB2_BASE_ADDR + 0x5400)
#define SAI1_BASE_ADDR        	(APB2_BASE_ADDR + 0x5800)
#define LCD_TFT_BASE_ADDR    	(APB2_BASE_ADDR + 0x6800)//will take to output type of the GPIO

//general macros
#define __VO  volatile
#define RCC ((RCC_RegDef *)MEM_RCC)//0x4002 3800
#define ENABLE 		1
#define DISABLE 	0
#define SET 		1
#define RESET		0
//GPIO register definitions

typedef struct

{
	__VO uint32_t MODER; 				//+00 offset
	__VO uint32_t OTYPER; 				//+04 offset
	__VO uint32_t OSPEEDR;				//+08 offset
	__VO uint32_t PUPDR;				//+0C offset
	__VO uint32_t IDR; 					//+10 offset
	__VO uint32_t ODR; 					//+14 offset
	__VO uint32_t BSRR; 				//+18 offset
	__VO uint32_t LCKR; 				//+1C offset
	__VO uint32_t AFR[2]; 				//+20 offset


}GPIO_RegDef;


typedef struct
{
	__VO uint32_t CR;
	__VO uint32_t PLLCFGR;
	__VO uint32_t CFGR;
	__VO uint32_t CIR;
	__VO uint32_t AHB1RSTR[3];
	__VO uint32_t RESERVED0;
	__VO uint32_t APB1RSTR[2];
	__VO uint32_t RESERVED1[2];
	__VO uint32_t AHB1ENR[3];
	__VO uint32_t RESERVED2;
	__VO uint32_t APB1ENR[2];
	__VO uint32_t RESERVED3[2];
	__VO uint32_t AHB1LPENR[3];
	__VO uint32_t RESERVED4;
	__VO uint32_t APB1LPENR[2];
	__VO uint32_t RESERVED5[2];
	__VO uint32_t BDCR;
	__VO uint32_t CSR;
	__VO uint32_t RESERVED6[2];
	__VO uint32_t SSCGR;
	__VO uint32_t PLLI2SCFGR;
	__VO uint32_t RCC_PLLSAICFGR;
	__VO uint32_t RCC_DCKCFGR;
}RCC_RegDef;




//GPIO_RegDef *GPIO = (GPIO_RegDef *)MODER = 25;

//macros for GPIO controller structure

#define GPIOA (GPIO_RegDef*)GPIOA_BASE_ADDR
#define GPIOB (GPIO_RegDef*)GPIOB_BASE_ADDR
#define GPIOC (GPIO_RegDef*)GPIOC_BASE_ADDR
#define GPIOD (GPIO_RegDef*)GPIOD_BASE_ADDR
#define GPIOE (GPIO_RegDef*)GPIOE_BASE_ADDR
#define GPIOF (GPIO_RegDef*)GPIOF_BASE_ADDR
#define GPIOG (GPIO_RegDef*)GPIOG_BASE_ADDR
#define GPIOH (GPIO_RegDef*)GPIOH_BASE_ADDR
#define GPIOI (GPIO_RegDef*)GPIOI_BASE_ADDR
#define GPIOJ (GPIO_RegDef*)GPIOJ_BASE_ADDR
#define GPIOK (GPIO_RegDef*)GPIOK_BASE_ADDR

//GPIOA -> MODER = 25;
//macros for clock enabling the clock for GPIOS

#define GPIOA_PCLOCK_EN (RCC->AHB1ENR[0]=(1<<0))
#define GPIOB_PCLOCK_EN (RCC->AHB1ENR[0]=(1<<1))
#define GPIOC_PCLOCK_EN (RCC->AHB1ENR[0]=(1<<2))
#define GPIOD_PCLOCK_EN (RCC->AHB1ENR[0]=(1<<3))
#define GPIOE_PCLOCK_EN (RCC->AHB1ENR[0]=(1<<4))
#define GPIOF_PCLOCK_EN (RCC->AHB1ENR[0]=(1<<5))
#define GPIOG_PCLOCK_EN (RCC->AHB1ENR[0]=(1<<6))
#define GPIOH_PCLOCK_EN (RCC->AHB1ENR[0]=(1<<7))
#define GPIOI_PCLOCK_EN (RCC->AHB1ENR[0]=(1<<8))
#define GPIOJ_PCLOCK_EN (RCC->AHB1ENR[0]=(1<<9))
#define GPIOK_PCLOCK_EN (RCC->AHB1ENR[0]=(1<<10))

//macros for disabling the clock for GPIOs
#define GPIOA_PCLOCK_DISABLE (RCC->AHB1ENR[0]=~(1<<0))
#define GPIOB_PCLOCK_DISABLE (RCC->AHB1ENR[0]=~(1<<1))
#define GPIOC_PCLOCK_DISABLE (RCC->AHB1ENR[0]=~(1<<2))
#define GPIOD_PCLOCK_DISABLE (RCC->AHB1ENR[0]=~(1<<3))
#define GPIOE_PCLOCK_DISABLE (RCC->AHB1ENR[0]=~(1<<4))
#define GPIOF_PCLOCK_DISABLE (RCC->AHB1ENR[0]=~(1<<5))
#define GPIOG_PCLOCK_DISABLE (RCC->AHB1ENR[0]=~(1<<6))
#define GPIOH_PCLOCK_DISABLE (RCC->AHB1ENR[0]=~(1<<7))
#define GPIOI_PCLOCK_DISABLE (RCC->AHB1ENR[0]=~(1<<8))
#define GPIOJ_PCLOCK_DISABLE (RCC->AHB1ENR[0]=~(1<<9))
#define GPIOK_PCLOCK_DISABLE (RCC->AHB1ENR[0]=~(1<<10))
