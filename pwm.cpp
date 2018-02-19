#include "mbed.h"

//PWM output channel
PwmOut PWM1(A4);

int main() 
{
    PWM1.period_ms(200);
    int x;
    x=0;
    
    while(1)
    {
        PWM1.pulsewidth_ms(x);
       x=x+1;
      if(x>100)
      {
        x=0;
        }
        
        wait(.2);
    }
}
