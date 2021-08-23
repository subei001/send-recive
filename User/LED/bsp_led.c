//关于bsp前缀:全称board support package 板级支持包（与我们使用的特定的开发板有相关性）
#include "bsp_led.h"   //每加入一个头文件都要去“魔术棒”的C/C++中添加头文件所在目录

void LED_GPIO_Config(void)
{
	GPIO_InitTypeDef  GPIO_InitStruct;
	
	RCC_APB2PeriphClockCmd(LED_G_GPIO_CLK, ENABLE);
	//绿灯GPIO端口预配置
	GPIO_InitStruct.GPIO_Pin = LED_G_GPIO_Pin;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(LED_G_GPIO_PORT, &GPIO_InitStruct);
	//红灯GPIO端口预配置
	GPIO_InitStruct.GPIO_Pin = LED_R_GPIO_Pin;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(LED_G_GPIO_PORT, &GPIO_InitStruct);
	//蓝灯GPIO端口预配置
	GPIO_InitStruct.GPIO_Pin = LED_B_GPIO_Pin;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(LED_G_GPIO_PORT, &GPIO_InitStruct);
}

