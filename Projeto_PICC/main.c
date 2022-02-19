#include <main.h>
#include "fuses.h"
#include "adc.h"
#include "portB.h"
#include <stdio.h>

#Define LN1 pin_A0 // s_Luz

#use DELAY (clock=4MHZ)
#Define SN2 pin_A1
#Define SN3 pin_A2
#Define S1  pin_A3 // Sensores de presen�a 
#Define S2  pin_A4

#Define M1   pin_B0 // Motor 

INT1 TIMER_FLAG = FALSE;

int8  ms=0,h=0,m=0,s=0; //tempo

#INT_RTCC
VOID RTCC_ISR(VOID)
{
   TIMER_FLAG = TRUE;
}

void TEMPO()
{
    if(ms>=15)
    {
         ms=0;
         S++;
      
         if(s==60)
         {
            s=0;
            m++;
         }
         if(m==60)
         {
            h++;
         }
    }
    else
    {
        ms++;
    }
}

void main()
   {
   SETUP_TIMER_0(RTCC_INTERNAL|RTCC_DIV_256|RTCC_8_BIT); //65.5MS
   ENABLE_INTERRUPTS(INT_TIMER0);
   ENABLE_INTERRUPTS(GLOBAL);
   
   SETUP_OSCILLATOR(OSC_4MHZ);
   
   output_LOW(luz);
   output_LOW(irri);
   output_LOW(movi);
   
   while(TRUE)
   {


   while(TRUE)
   {
      //TODO: User Code
   }

}

