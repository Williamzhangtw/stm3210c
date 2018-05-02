#include "led.h"




const LED_Typedef led[LED_ALL] = {
	{LED_BLUE_GPIO_Port,LED_BLUE_Pin},
	{LED_RED_GPIO_Port,LED_RED_Pin},
	{LED_GREEN_GPIO_Port,LED_GREEN_Pin},
	{LED_ORANGE_GPIO_Port,LED_ORANGE_Pin},
};
	



void BSP_LED_Off(LED_ENUM n);
void BSP_LED_On(LED_ENUM n);
void BSP_LED_Toggle(LED_ENUM n);



void BSP_LED_Off(LED_ENUM n){
	HAL_GPIO_WritePin(led[n].gpio,led[n].pin,GPIO_PIN_RESET);
}
void BSP_LED_On(LED_ENUM n){
	HAL_GPIO_WritePin(led[n].gpio,led[n].pin,GPIO_PIN_SET);
}
void BSP_LED_Toggle(LED_ENUM n){
	
	HAL_GPIO_TogglePin(led[n].gpio,led[n].pin);
}
