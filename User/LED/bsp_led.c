//����bspǰ׺:ȫ��board support package �弶֧�ְ���������ʹ�õ��ض��Ŀ�����������ԣ�
#include "bsp_led.h"   //ÿ����һ��ͷ�ļ���Ҫȥ��ħ��������C/C++�����ͷ�ļ�����Ŀ¼

void LED_GPIO_Config(void)
{
	GPIO_InitTypeDef  GPIO_InitStruct;
	
	RCC_APB2PeriphClockCmd(LED_G_GPIO_CLK, ENABLE);
	//�̵�GPIO�˿�Ԥ����
	GPIO_InitStruct.GPIO_Pin = LED_G_GPIO_Pin;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(LED_G_GPIO_PORT, &GPIO_InitStruct);
	//���GPIO�˿�Ԥ����
	GPIO_InitStruct.GPIO_Pin = LED_R_GPIO_Pin;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(LED_G_GPIO_PORT, &GPIO_InitStruct);
	//����GPIO�˿�Ԥ����
	GPIO_InitStruct.GPIO_Pin = LED_B_GPIO_Pin;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(LED_G_GPIO_PORT, &GPIO_InitStruct);
}

