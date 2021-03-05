/*
 * LED_Blink.c
 *
 *  Created on: Mar 5, 2021
 *      Author: 99003720
 */

//#include "STM32F4xx.h"
#include "STM32Fxx_GPIO_Driver.h"

void delay()
{
	for(uint32_t i=0;i<500000;i++);
}
int main(void)
{
	GPIO_Handle GPIO_LED;
	GPIO_LED.pGPIOx = GPIOD;
	GPIO_LED.pin_config.PinNum = GPIO_Pin_num14;
	GPIO_LED.pin_config.Pinmode = GPIO_Pin_Output_Mode1;
	GPIO_LED.pin_config.speed = GPIO_Medium_Speed;
	GPIO_LED.pin_config.output_type = GPIO_Otype_Open_drain;
	GPIO_LED.pin_config.pupd = GPIO_PuPd_Pull_up;
	GPIO_PeriClk(GPIOD, ENABLE);
	GPIO_Init(&GPIO_LED);

	while(1)
	{
		//GPIO_Toggle(GPIOD, GPIO_Pin_num14);
		GPIO_writetoPin(GPIOD,GPIO_Pin_num14 ,SET);
		delay();
		GPIO_writetoPin(GPIOD,GPIO_Pin_num14 ,RESET);

	}
}

