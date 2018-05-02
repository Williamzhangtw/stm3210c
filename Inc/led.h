#ifndef __LED__H
#define __LED__H

#include "stm32f1xx.h"
#include "main.h"


#define LED_ALL 4

typedef enum{
	LED_BLUE = 0,
	LED_RED,
	LED_GREEN,
	LED_ORANGE,
}LED_ENUM;

typedef struct {
	GPIO_TypeDef * gpio;
	uint16_t pin;
}LED_Typedef;




void BSP_LED_Off(LED_ENUM n);
void BSP_LED_On(LED_ENUM n);
void BSP_LED_Toggle(LED_ENUM n);

#endif
