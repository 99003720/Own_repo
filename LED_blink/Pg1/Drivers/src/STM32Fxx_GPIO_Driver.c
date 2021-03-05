
#include "STM32Fxx_GPIO_Driver.h"


/*
 * STM32Fxx_GPIO_Driver.c
 *
 *  Created on: Mar 5, 2021
 *      Author: 99003720

#ifndef INC_STM32F4XX_GPIO_DRIVERS_H
#define INC_STM32F4XX_GPIO_DRIVER_H



#endif

//creating APIs
//1. peripheral clock: Enable or disable

*/

//2. initialization and deinit
void GPIO_Init(GPIO_Handle *pGPIOHandle)
{
	uint32_t temp;
	GPIO_PeriClk(pGPIOHandle->pGPIOx, ENABLE);

	temp = (pGPIOHandle ->pin_config.Pinmode << (2 * pGPIOHandle->pin_config.PinNum));
	pGPIOHandle -> pGPIOx -> MODER &= ~( 0x3 << 2 * pGPIOHandle -> pin_config.PinNum); // to clear the bit
	pGPIOHandle -> pGPIOx -> MODER |= temp; //setting


	//configure speed


	temp = (pGPIOHandle ->pin_config.speed << (2 * pGPIOHandle->pin_config.PinNum));
	pGPIOHandle ->pGPIOx-> OSPEEDR = ~(0x3 << (2 * pGPIOHandle->pin_config.PinNum));
	pGPIOHandle -> pGPIOx->OSPEEDR |= temp;

	//configuring pupd settings


	temp = (pGPIOHandle -> pin_config.pupd << (2 * pGPIOHandle->pin_config.PinNum));
	pGPIOHandle ->pGPIOx->PUPDR &= ~( 0x3 << pGPIOHandle->pin_config.PinNum);
	pGPIOHandle -> pGPIOx->PUPDR |= temp;

	//configure optype

	temp = (pGPIOHandle -> pin_config.output_type << pGPIOHandle->pin_config.PinNum);
		pGPIOHandle ->pGPIOx->OTYPER &= ~( 0x1 << pGPIOHandle->pin_config.PinNum);
		pGPIOHandle -> pGPIOx->OTYPER |= temp;

		//config alt funcn
		uint8_t temp1,temp2;
		temp1 = pGPIOHandle->pin_config.PinNum/8;
		temp1 = pGPIOHandle->pin_config.PinNum%8;
		pGPIOHandle->pGPIOx->AFR[temp1] &= ~(0xF << (4*temp2));
		pGPIOHandle->pGPIOx->AFR[temp1] |= (pGPIOHandle->pin_config.Altfunc << (4*temp2));


}


  void GPIO_PeriClk (GPIO_RegDef *pGPIOx, uint8_t EN_or_DI)
{
           if (EN_or_DI == ENABLE)
  {
	 if(pGPIOx == GPIOA)
		{
		 GPIOA_PCLOCK_EN;
		}
	 else if(pGPIOx == GPIOB)
	 {
		 GPIOB_PCLOCK_EN;
	 }
	 else if(pGPIOx == GPIOC)
	 	 {
	 		 GPIOC_PCLOCK_EN;
	 	 }
	 else if(pGPIOx == GPIOD)
	 	 {
	 		 GPIOD_PCLOCK_EN;
	 	 }
	 else if(pGPIOx == GPIOE)
	 	 {
	 		 GPIOE_PCLOCK_EN;
	 	 }
	 else if(pGPIOx == GPIOF)
	 	 {
	 		 GPIOF_PCLOCK_EN;
	 	 }
	 else if(pGPIOx == GPIOG)
	 	 	 {
	 	 		 GPIOG_PCLOCK_EN;
	 	 	 }
	 else if(pGPIOx == GPIOH)
	 	 	 {
	 	 		 GPIOH_PCLOCK_EN;
	 	 	 }
	 else if(pGPIOx == GPIOI)
	 	 	 {
	 	 		 GPIOI_PCLOCK_EN;
	 	 	 }
	 else if(pGPIOx == GPIOJ)
	 	 	 {
	 	 		 GPIOJ_PCLOCK_EN;
	 	 	 }
	 else if(pGPIOx == GPIOK)
	 	 	 {
	 	 		 GPIOK_PCLOCK_EN;
	 	 	 }
}


}

 uint16_t GPIO_ReadfromPort (GPIO_RegDef *pGPIOx){
  	uint16_t temp;
  	temp = (uint16_t *)(pGPIOx -> IDR);
  	//GPIO_Handle -> pGPIOx;
  	//register will store in IDR:Input data register
  	//GPIO_RegDef
  	return temp;
  }

 uint8_t GPIO_ReadfromPin (GPIO_RegDef *pGPIOx,uint8_t GPIO_PinNum){
 uint8_t dummy;
 dummy = (uint8_t)((pGPIOx -> IDR >> GPIO_PinNum) & 0x00000001);
 return dummy;

 }

 void GPIO_writetoport(GPIO_RegDef *pGPIOx, uint16_t value ){
 pGPIOx -> ODR = value;

 }

 void GPIO_writetoPin(GPIO_RegDef *pGPIOx, uint8_t GPIO_PinNum,uint16_t value){
 if(value == SET)
 {
 	//pGPIOx -> ODR |= (1<<GPIO_PinNum);
	 pGPIOx->ODR |= 1<<GPIO_PinNum;
 }
 else
 {
 	pGPIOx -> ODR &= ~(1<<GPIO_PinNum);
 }
 }
 void GPIO_Toggle(GPIO_RegDef *pGPIOx, uint8_t GPIO_PinNum)
 {
 pGPIOx -> ODR ^= (1<< GPIO_PinNum);
 }
