#include "../../MCAL/DIO DRIVE/DIO.h"



#ifndef BUTTON_H_
#define BUTTON_H_
#define button_1_port Port_D
#define button_1_pin 2 

void buttion_init (uint8_t buttonport , uint8_t buttonpin);
void buttion_read(uint8_t buttonport , uint8_t buttonpin, uint8_t* value);




#endif /* BUTTON_H_ */