#include "mbed.h"
//Basic PWM Led Control In Digital Port

//DigitalOut RLED(PTB22);
//DigitalOut GLED(PTE26);
DigitalOut BLED(PTB21);
float period=0.01;//Config. Period of PWM
float t_on;
float t_off;
double duty=0; //Duty Cycle (%)
unsigned int count=0;

int main()
{
    BLED=0;
    //Calculate on and off time
    t_on= period*duty;
    t_off= period - t_on;
    
    while (true) 
    {
            if(count<=2)//Time between changes in brightness = count*period
    count++;
    else
    {
    count=0;  
        if(duty<1)            
            duty+=0.01;//Adjust dimming speed
        else
        {
         duty=0;   
        }
    t_on= period*duty;
    t_off= period - t_on; 
    }
    //LED control
        wait(t_on);
        BLED=1;
    
        wait(t_off); 
        BLED=0;
    }
    
} 
