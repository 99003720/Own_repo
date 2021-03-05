#include "STM32F4xx.h"



//creating the structure for GPIO pin_config
typedef struct
{
	uint8_t PinNum;
	uint8_t Pinmode;
	uint8_t speed;
	uint8_t output_type;
	uint8_t pupd;
	uint8_t Altfunc;
}GPIO_PinConfig;

//creating handle structure
typedef struct
{
	GPIO_RegDef *pGPIOx; //declared a pointer variable of GPIO_RegDef
	GPIO_PinConfig pin_config; //pin config of structure stype

}GPIO_Handle;


//creating APIs
//1. peripheral clock: Enable or disable

void GPIO_PeriClk(GPIO_RegDef *pGPIOx,uint8_t EN_or_DI);
//2. initialization and deinit
void GPIO_Init(GPIO_Handle *pGPIOHandle);
void GPIO_Dinit(GPIO_RegDef *PGPIOx);

//3. Read/write to/from port/pin
uint16_t GPIO_ReadfromPort(GPIO_RegDef *pGPIOx);
uint8_t GPIO_ReadfromPin(GPIO_RegDef *pGPIOx,uint8_t GPIO_PinNum );
void GPIO_writetoport(GPIO_RegDef *pGPIOx, uint16_t value );
void GPIO_writetoPin(GPIO_RegDef *pGPIOx, uint8_t GPIO_PinNum, uint16_t value);
void GPIO_Toggle(GPIO_RegDef *pGPIOx, uint8_t GPIO_PinNum);



//defining macros for pin number
#define GPIO_Pin_num1 							0
#define GPIO_Pin_num2 							1
#define GPIO_Pin_num3  							2
#define GPIO_Pin_num4  							3
#define GPIO_Pin_num5  							4
#define GPIO_Pin_num6  							5
#define GPIO_Pin_num7  							6
#define GPIO_Pin_num8  							7
#define GPIO_Pin_num9  							8
#define GPIO_Pin_num10  						9
#define GPIO_Pin_num11  						10
#define GPIO_Pin_num12  						11
#define GPIO_Pin_num13  						12
#define GPIO_Pin_num14  						13
#define GPIO_Pin_num15  						14
#define GPIO_Pin_num16  						15


//Defining MACROS for PinMode
#define GPIO_Pin_Input_Mode0    				0b0
#define GPIO_Pin_Output_Mode1    				0b1
#define GPIO_Pin_Alt_Func_Mode2    				1b0
#define GPIO_Pin_Analog_Mode3    				1b1



//Defining  MACROS for Speed
#define GPIO_Low_Speed    						0b0
#define GPIO_Medium_Speed    					0b1
#define GPIO_High_Speed    						1b0
#define GPIO_VeryHigh_Speed  					1b1


//Defining MACROS for OType
#define GPIO_OType_Push_pull     				0
#define GPIO_Otype_Open_drain     				1


//Defining MACROS for PuPd
#define GPIO_PuPd_No_pullup_down     			0b0
#define GPIO_PuPd_Pull_up     					0b1
#define GPIO_PuPd_Pull_down 					1b0
#define GPIO_PuPd_Reserved 						1b1


/*
//Defining MACROS for AFN
#define GPIO_AFN_0    							0
#define GPIO_AFN_1     							1
#define GPIO_AFN_2     							2
#define GPIO_AFN_3     							3
#define GPIO_AFN_4     							4
#define GPIO_AFN_5     							5
#define GPIO_AFN_6     							6
#define GPIO_AFN_7     							7
#define GPIO_AFN_8     							8
#define GPIO_AFN_9     							9
#define GPIO_AFN_10 							10
#define GPIO_AFN_11 							11
#define GPIO_AFN_12 							12
#define GPIO_AFN_13 							13
#define GPIO_AFN_14 							14
#define GPIO_AFN_15 							15
*/

