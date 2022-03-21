#INCLUDE <16f887.h>
#USE DELAY (CLOCK=4000000)
#FUSES XT,PROTECT,NOWDT,NOBROWNOUT,PUT,NOLVP
#DEFINE SW PORTA,1
#DEFINE LED PORTB, 0
#BYTE PORTA= 5
#BYTE PORTB= 6
MAIN() 
{   
     SET_TRIS_A(0B10);
     SET_TRIS_B(0B11111110);     
     WHILE(TRUE) 
      {
            IF(BIT_SET(SW))
            {
                BIT_SET(LED);
            }
            ELSE      
            {
               BIT_CLEAR(LED);
            }      
      }
}
   
   
