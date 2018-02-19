#include "mbed.h"

DigitalOut gpo1(D2);
DigitalOut gpo2(D4);

int main()
{
    while (true) {
        gpo1=1;
        gpo2=0;
        wait(2);
        
    }
}
