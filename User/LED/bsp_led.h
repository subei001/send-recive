#ifndef __BSP_LED_H
#define __BSP_LED_H

#include "stm32f10x.h"

#define LED_G_GPIO_Pin     GPIO_Pin_0
#define LED_G_GPIO_PORT    GPIOB
#define LED_G_GPIO_CLK     RCC_APB2Periph_GPIOB

#define LED_R_GPIO_Pin     GPIO_Pin_5

#define LED_B_GPIO_Pin     GPIO_Pin_1


//���κ��ʵ��,���κ�����
#define NO           0
#define OFF          1

#define  LED_G(x)  if(x)\
	                       GPIO_SetBits(LED_G_GPIO_PORT, LED_G_GPIO_Pin);\
                   else GPIO_ResetBits(LED_G_GPIO_PORT, LED_G_GPIO_Pin);    //"\"��C�����е����з����������У��������з����治�����κη���ֻ���ǻس�����ס


void LED_GPIO_Config(void);

#endif  /* __BSP_LED_H */

