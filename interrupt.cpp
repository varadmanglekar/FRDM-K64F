#include "mbed.h"


DigitalOut Red(LED1);
DigitalOut Blue(LED3);
DigitalOut Green(LED2);
InterruptIn Interrupt(SW2);


void blink()
{
    wait(.4);
    Green=1;
    Blue=0;
    wait(.4);
    Blue=1;
    wait(.4);
}

int main() 
{
    Interrupt.fall(&blink);
    Blue=1;
    while (1) 
    {
        Red=!Red;
        wait(.4);
    }
}
