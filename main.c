#include "Application/APP.h"

uint8_t button=0;


int main(void)
{
	
	led_init(Port_A , Car_green_led);
	led_init(Port_A , Car_yellow_led);
	led_init(Port_A , Car_red_led);
	led_init(Port_B , pedestrain_green_led);
	led_init(Port_B , pedestrain_yellow_led);
	led_init(Port_B , pedestrain_red_led);
	buttion_init(button_1_port, button_1_pin);
	
	//Enable global interrupt
	sei();
	// choose external interrupt sense
	MCUCR |=(1<<1) |(1<<0);
	// enable external interrupt INT0
	GICR |=(1<<6);
	led_on(Port_A , Car_green_led);
	uint8_t i=1;
	while (1)
	{
		while (button==0)
		{
			led_on(Port_A , Car_green_led);
			led_off(Port_A , Car_red_led);
			i=1;
			wait_fiveSec();
			if (button==1) break;
			////////////////////////////////////////////////
			led_toggle(Port_A , Car_yellow_led);
			i=1;
			wait_fiveSec();
			if (button==1) break;
			//////////////////////////
			
			led_off(Port_A , Car_green_led);
			led_off(Port_A , Car_yellow_led);
			led_on(Port_A , Car_red_led);
			i=2;
			wait_fiveSec();
			
			if (button==1) break;
		} 
		 if (button==1){
			switch (i) {
				case 1: 
				led_on(Port_B , pedestrain_red_led);
				wait_fiveSec();
				led_on(Port_A , Car_yellow_led);
				led_on(Port_B , pedestrain_yellow_led);
				
				wait_fiveSec();
				
				led_on(Port_A , Car_red_led);
				led_off(Port_A , Car_green_led);
				led_on(Port_B , pedestrain_green_led);
				led_off(Port_B , pedestrain_red_led);
				led_off(Port_B , pedestrain_yellow_led);
				led_off(Port_A , Car_yellow_led);
				wait_fiveSec();
				led_off(Port_B , pedestrain_green_led);
				led_off(Port_A , Car_red_led);
				button=0;
				break;
				case 2:
				led_on(Port_B , pedestrain_green_led);
				wait_fiveSec();
				led_off(Port_B , pedestrain_green_led);
				led_off(Port_A , Car_red_led);
				button=0;
				break;
				default:
				break;
			}
		}
		
		
	}
	

}

ISR(INT0_vect){
	
	button=1;
	

}
