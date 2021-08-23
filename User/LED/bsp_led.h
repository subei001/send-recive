#ifndef __BSP_LED_H
#define __BSP_LED_H

#include "stm32f10x.h"

#define LED_G_GPIO_Pin     GPIO_Pin_0
#define LED_G_GPIO_PORT    GPIOB
#define LED_G_GPIO_CLK     RCC_APB2Periph_GPIOB

#define LED_R_GPIO_Pin     GPIO_Pin_5

#define LED_B_GPIO_Pin     GPIO_Pin_1


//带参宏的实现,带参宏主体
#define NO           0
#define OFF          1

#define  LED_G(x)  if(x)\
	                       GPIO_SetBits(LED_G_GPIO_PORT, LED_G_GPIO_Pin);\
                   else GPIO_ResetBits(LED_G_GPIO_PORT, LED_G_GPIO_Pin);    //"\"是C语言中的续行符，用来分行，但是续行符后面不能有任何符号只能是回车，记住


void LED_GPIO_Config(void);

#endif  /* __BSP_LED_H */

