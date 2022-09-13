#include "LED.h"

void led_init(uint8_t ledport ,uint8_t ledpin )
{
	DIO_init(ledport , ledpin , OUT);
}
void led_on(uint8_t ledport ,uint8_t ledpin )
{
	DIO_write(ledport , ledpin , HIGH);
}
void led_off(uint8_t ledport ,uint8_t ledpin )
{
	DIO_write( ledport ,  ledpin , LOW);
}

void led_toggle(uint8_t portNumbre ,uint8_t pinNumbre ){
	DIO_toggle(portNumbre, pinNumbre);
}