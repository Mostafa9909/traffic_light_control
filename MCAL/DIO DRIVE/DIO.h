/*
 * DIO.h
 *
 * Created: 8/31/2022 5:34:57 PM
 *  Author: SOUQ COMPUTER
 */ 


#ifndef DIO_H_
#define DIO_H_
#include "../REGISTER DRIVE/register.h"
#include "../REGISTER DRIVE/typedef.h"
#define Port_A 'A'
#define Port_B 'B'
#define Port_C 'C'
#define Port_D 'D'

//direction defines
#define IN 0
#define OUT 1
// value defines
#define LOW 0
#define HIGH 1


void DIO_init (uint8_t portNumbre , uint8_t pinNumbre , uint8_t direction);
void DIO_write (uint8_t portNumbre , uint8_t pinNumbre , uint8_t value);
void DIO_toggle (uint8_t portNumbre , uint8_t pinNumbre);
void DIO_read (uint8_t portNumbre , uint8_t pinNumbre , uint8_t *value);


#endif /* DIO_H_ */