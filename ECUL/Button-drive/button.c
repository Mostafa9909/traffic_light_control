#include "button.h"

void buttion_init (uint8_t buttonport , uint8_t buttonpin){
	DIO_init(buttonport,buttonpin, IN);
}
void buttion_read(uint8_t buttonport , uint8_t buttonpin, uint8_t* value){
	DIO_read(buttonport ,buttonpin, value );
}
