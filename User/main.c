#include "stm32f10x.h"
#include "bsp_led.h"
#include "bsp_usart.h"
#include "string.h"

char string[100]="";
char * dest_string;
uint32_t j=0;
extern uint8_t USART1_FINISH;
extern uint32_t i;

int main(void)
{	
	//uint8_t  ch;
	//uint8_t  string[]="�����������룬Ҫ��main.c�ļ��ı��뻻��ANSI������ʽ\n";
	//uint8_t   a[10]={0,1,2,3,4,5,6,7,8,9};
	
	//LED_GPIO_Config();	
	USART_Config();
	
	//USART_SendString(USART1, string);
	
	//printf�Ƿ����ַ�����putchar�Ƿ��͵��ַ�
	printf("test\r\n");              //C�����е�printf��putchar���õ���C���е�fputc������Ҫ������ʵ�ִ��������Ҫ�ض������ĺ���ʵ��
	//putchar('S');
	
	
	while(1)
	{
		if(USART1_FINISH)
		{
			printf("recv_finish total:%d\r\n",i);
			printf("string : %s\r\n",string);
			dest_string = strstr(string,"+");
			
			if(dest_string == NULL)
			{
				printf("didn't get the target\r\n");
			}
			else
			{
				printf("get the target string : %s\r\n",dest_string);
			}

			for(j=0;j<i;j++)
			{
				string[j]=0x00;
			}
			i = 0;
			USART1_FINISH = 0;
		}
	}	
}

