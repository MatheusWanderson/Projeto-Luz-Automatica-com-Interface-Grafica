#include "fuses.h"
#include "serial.h"
#include "adc.h"
#include "portB.h"
#include <stdio.h>



void main(void) {
    char leitura[5];
    starserial();
    startADC();
    startPORTB();

    while(!scanRXstring("go",0));

    while(1){

        leitura[0] = LePinoPortB(0);
        leitura[1] = LePinoPortB(1);
        leitura[2] = LePinoPortB(2);
        leitura[3] = LePinoPortB(3);
        leitura[4] = LePinoPortB(4);
        
        printf("ADC 0: %u \n\r", ((unsigned int)ADC_read(0)));
        printf("ADC 1: %u \n\r", ((unsigned int)ADC_read(1)));
        printf("ADC 2: %u \n\r", ((unsigned int)ADC_read(3)));
        printf("PORTB: %c%c%c%c%c\n\n\r", leitura[0], leitura[1], leitura[2], leitura[3], leitura[4] );

        __delay_ms(700);
    }
}