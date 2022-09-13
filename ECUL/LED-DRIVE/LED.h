#include "../../MCAL/DIO DRIVE/DIO.h"

#ifndef LED_H_
#define LED_H_

#define Car_green_led 0
#define Car_yellow_led 1
#define Car_red_led 2
#define pedestrain_green_led 0
#define pedestrain_yellow_led 1
#define pedestrain_red_led 2


void led_init(uint8_t portNumbre ,uint8_t pinNumbre );
void led_on(uint8_t portNumbre ,uint8_t pinNumbre );
void led_off(uint8_t portNumbre ,uint8_t pinNumbre );

void led_toggle(uint8_t portNumbre ,uint8_t pinNumbre );




#endif /* LED_H_ */