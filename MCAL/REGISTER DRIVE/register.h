/*
 * register.h
 *
 * Created: 8/31/2022 4:55:04 PM
 *  Author: SOUQ COMPUTER
 */ 


#ifndef REGISTER_H_
#define REGISTER_H_
#include "typedef.h" 


// portAregisters
//**************************************

#define PORTA *((volatile uint8_t*)0x3B)
#define DDRA *((volatile uint8_t*)0x3A)
#define PINA *((volatile uint8_t*)0x39)


// portB registers 
//**************************************
#define PORTB *((volatile uint8_t*)0x38)
#define DDRB *((volatile uint8_t*)0x37)
#define PINB *((volatile uint8_t*)0x36)

// portC registers
//**************************************

#define PORTC *((volatile uint8_t*)0x35)
#define DDRC *((volatile uint8_t*)0x34)
#define PINC *((volatile uint8_t*)0x33)



// portD registers
//**************************************

#define PORTD *((volatile uint8_t*)0x32)
#define DDRD *((volatile uint8_t*)0x31)
#define PIND *((volatile uint8_t*)0x30)

//*******************************************************
//TIMER0 REGISTERS
//**********************************************************
#define TCCR0 *((volatile uint8_t*)0x53)
#define TCNT0 *((volatile uint8_t*)0x52)
#define TIFR *((volatile uint8_t*)0x58)

//*******************************************************
//interrupts registers REGISTERS
//**********************************************************
#define MCUCR *((volatile uint8_t*)0x55)
#define GICR *((volatile uint8_t*)0x5B)

/*#define sei()
# define sei()  __asm__ __volatile__ ("sei" ::: "memory")
#define INT0_vect			_VECTOR(1)

#  define ISR(vector, [attributes])
#  define __INTR_ATTRS used, externally_visible
#  define ISR(vector, ...)            \
void vector (void) __attribute__ ((signal,__INTR_ATTRS)) __VA_ARGS__; \
void vector (void)

#  define ISR(vector, ...)            \
extern "C" void vector (void) __attribute__ ((signal,__INTR_ATTRS)) __VA_ARGS__; \
void vector (void)*/

#endif /* REGISTER_H_ */