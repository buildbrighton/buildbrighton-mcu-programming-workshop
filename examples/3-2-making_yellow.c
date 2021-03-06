/*
 * blinky_without_delay.c
 *
 * Turn LED on, and off - without using sleep delays
 * 
 */

#include <avr/io.h>
#include "common.h"
#include "badge.h"

unsigned int loop_counter = 0;
unsigned int second_counter = 0;

void pre_loop_setup() {
    initialise_registers();
}

int main(void) {

    pre_loop_setup();

    while (1) {

        if ( loop_counter % 100 == 0 ) {
            TURN_RED_ON;
            TURN_GREEN_ON;
        } else if ( loop_counter % 100 == 3 ) {
            TURN_RED_OFF;
        } else if ( loop_counter % 100 == 50 ) {
            TURN_GREEN_OFF;
        } 

        loop_counter++;

    }

    return 0;

}

