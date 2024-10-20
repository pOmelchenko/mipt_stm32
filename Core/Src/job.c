#include "gpio.h"

void blink_led(void)
{
	HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, 0);
	HAL_Delay(100);
	HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, 1);
	HAL_Delay(100);
}
