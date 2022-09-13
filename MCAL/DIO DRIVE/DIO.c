#include "DIO.h"
#include "../REGISTER DRIVE/register.h"



void DIO_init (uint8_t portNumbre , uint8_t pinNumbre , uint8_t direction){
	switch (portNumbre){
		case Port_A:
		if(direction ==IN){
			DDRA &=~(1<<pinNumbre);
		} else if (direction == OUT){
			DDRA |= (1<<pinNumbre);
		}
		break;
		////////////////////////////
		case Port_B:
			if(direction ==IN){
				DDRB &=~(1<<pinNumbre);
				} else if (direction == OUT){
				DDRB |= (1<<pinNumbre);
			}
		break;
		/////////////////////////////
		case Port_C:
			if(direction ==IN){
				DDRC &=~(1<<pinNumbre);
				} else if (direction == OUT){
				DDRC |= (1<<pinNumbre);
			}
		break;
		///////////////////////////
		case Port_D:
		if(direction ==IN){
			DDRD &=~(1<<pinNumbre);
			} else if (direction == OUT){
			DDRD |= (1<<pinNumbre);
		}
		break;
	}
					
}

/////////////////////////////////////////////
void DIO_write (uint8_t portNumbre , uint8_t pinNumbre , uint8_t value)
{
switch (portNumbre){
	case Port_A:
	if(value==LOW){
		PORTA &=~(1<<pinNumbre); // write 0
		} else if (value == HIGH){
		PORTA |= (1<<pinNumbre); // write 1
	}
	break;
	
	case Port_B:
	if(value==LOW){
		PORTB &=~(1<<pinNumbre); // write 0
		} else if (value == HIGH){
		PORTB |= (1<<pinNumbre);
	}
	break;
	
	
	case Port_C:
	if(value==LOW){
		PORTC &=~(1<<pinNumbre); // write 0
		} else if (value == HIGH){
		PORTC |= (1<<pinNumbre);
	}
	break;
	case Port_D:
	if(value==LOW){
		PORTD &=~(1<<pinNumbre); // write 0
		} else if (value == HIGH){
		PORTD |= (1<<pinNumbre);
	}
	break;	
 }
}
void DIO_toggle (uint8_t portNumbre , uint8_t pinNumbre){
	
	switch (portNumbre){
		case Port_A:
		PORTA ^= (1<<pinNumbre);
		break;
		////////////////////////////
		case Port_B:
		PORTB ^= (1<<pinNumbre);
		
		break;
		/////////////////////////////
		case Port_C:
		PORTC ^= (1<<pinNumbre);
		break;
		///////////////////////////
		PORTD ^= (1<<pinNumbre);
		break;
	}
	
}
void DIO_read (uint8_t portNumbre , uint8_t pinNumbre , uint8_t *value){
	
	switch (portNumbre){
		case Port_A:
		*value= (PINA &= (1<<pinNumbre))>>pinNumbre;
		break;
		////////////////////////////
		case Port_B:
		*value= (PINB &= (1<<pinNumbre))>>pinNumbre;
		
		break;
		/////////////////////////////
		case Port_C:
		*value= (PINC &= (1<<pinNumbre))>>pinNumbre;
		break;
		///////////////////////////
		case Port_D:
		*value= (PIND &= (1<<pinNumbre))>>pinNumbre;
		break;
	}
	
	
}