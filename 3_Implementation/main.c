/**
 * @file main.c
 * @author vatsal shah (vatsal.see18@sot.pdpu.ac.in)
 * @brief main file for the project Automobile climate control
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <avr/io.h>
#include<util/delay.h>
#include "inc/Activity1.h"
#include "inc/Activity2.h"
#include"inc/Activity3.h"
int main(void)
{
    SEAT_CHECKING(); //Checks seat (Button on or off).
    ADC_INITIALIZATION(); //Turn on ADC for accepting values of tempreature.
    TIMER_INITIALIZATION(); //Divides clock bt prescale of 64 anf initializes the timer.
    LCD_INITIALIZATION(); //Lcd functions.

    uint16_t read;

	while(1)
    {
        if(SEAT_CHECK)
        {
            PORTD|=(1<<PD2);
            if(HEATER_ON){
                LED_ON;
                _delay_ms(1000);
                CLEAR_LCD();
                read=SENSE_ADC(0);
                PWM_OUPUT(read);

            }
            else
                {
                    LED_OFF;
                     _delay_ms(1000);
                    HEATER_OFF;
                    _delay_ms(1000);
                    CLEAR_LCD();
                }
        }
        else{
            LED_OFF;
            _delay_ms(1000);
            HEATER_OFF;
            _delay_ms(1000);
            CLEAR_LCD();
        }
    }
    return 0;
}
