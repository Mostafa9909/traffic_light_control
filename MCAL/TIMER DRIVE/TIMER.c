
#include "TIMER.h"
#define overflownumbre 7813
void timer_init(){
	// CHOOSE MODE
	TCCR0 = 0x00;
	// SET INITIAL VALUE OF TIMER
	TCNT0 = 0x00;
}
void wait_fiveSec(){
	
	
	
	// start timer
	TCCR0 |= (1<<0);
	
	int i=0;
	
	while (i< overflownumbre)
	{
		while((TIFR &(1<<0))==0);
		// CLEAR TIMER OVERFLOW
		TIFR |= (1<<0);
		i++;
	}
	i=0;
}