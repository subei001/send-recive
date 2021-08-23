#ifndef __BSP_USART_H
#define __BSP_USART_H

#include "stm32f10x.h"
#include <stdio.h>




void USART_Config(void);
void USART_SendByte(USART_TypeDef* pUSARTx,uint8_t data);
void USART_SendHalfWord(USART_TypeDef* pUSARTx,uint16_t data);
void USART_SendArray(USART_TypeDef* pUSARTx,uint8_t *array ,uint8_t num);
void USART_SendString(USART_TypeDef* pUSARTx,uint8_t *string);
int fputc(int ch, FILE *f);
int fgetc(FILE *f);

#endif /* __BSP_USART_H */
