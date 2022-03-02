#include <16f876a.h>
#include fuses.h
#include serial.h
#include abc.h
#include portaB.h
#include <stdio.h>

void main (void) {
   
   char leitura [5];
   startseril();
   startABC();
   startPORTB();
   
   while(!scanRXstring("go",0));
   
      while(1){
            
            leitura[0]= LePinoPortB(0);
            leitura[1]= LePinoPortB(1);
            leitura[2]= LePinoPortB(2);
            leitura[3]= LePinoPortB(3);
            
            printf("ADC 0: %u \n\r", ((unsigned int)ADC_Read(0)));
            printf("ADC 1: %u \n\r", ((unsigned int)ADC_Read(1)));
            printf("ADC 2: %u \n\r", ((unsigned int)ADC_Read(3)));
            printf("PORTB: %c%c%c%c%c\n\n\r", leitura[0], leitura[1],leitura[3], leitura[4]);
            
            __delay_ms(700);
   
               }
}

