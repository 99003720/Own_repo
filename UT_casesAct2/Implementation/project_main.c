//include files here header
#include <stdio.h>
#include <string.h>
#include"unity.h"
#include"functionbreaker.h"
#define VALID   (1)
#define INVALID (0)
//enum operations{ Basic_Calculations=1,Trignometry,Dimension_Conversion,Binary_Decimal_Conversion, EXIT };
unsigned int func_operation ;
void calculator_menu(void);

int valid_operation(int operation);

int main(int argc, char *argv[])
{
    
    while(1)
    {
        calculator_menu();
    }
}
void calculator_menu(void)
{
 
    printf("Press 1 for the answer.");
    
   char arr[100]="Grabage$Welcome to LTTS;ignore";
   char *c[100];

    scanf("%d", &func_operation);

    switch(func_operation)
    {
        case 1:
             
            
            printf("\n%s",Function_breaker(arr,&c));
            

            break;
        
        default:
            printf("\nPlease choose correct options\n");

    }
}