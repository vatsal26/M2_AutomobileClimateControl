#include "Activity1.h"

/**
 * @brief Seat configurations,heater and led and  pin assigning 
 * 
 */
void SEAT_CHECKING(){
    DDRD|=(1<<PD0); //set PD0 pin as output
    DDRD&=~(1<<PD1); //clearing PD1 pin
    PORTD|=(1<<PD1); //set PD! pin as output
    DDRD&=~(1<<PD2); //clearing PD2 pin
    PORTD|=(1<<PD2); //Setting PD2 pin
}