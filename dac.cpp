#include "mbed.h"

// The sinewave is created on this pin
// aout.write_u16(value) where value is from 0 to 65535 gives op 0 to 3.3v
AnalogOut aout(DAC0_OUT);
Serial pc(USBTX,USBRX);
int main()
{
    const double pi = 3.141592653589793238462;
    const double amplitude = 4096.0f;
    const double offset = 65535/2;
    double rads = 0.0;
    uint16_t sample = 0;
    float a;
    pc.baud(9600);
    while(1) 
   {
        // sinewave output
       for (int i = 0; i < 360; i=i+20) {
           rads = (pi * i) / 180.0f;
           sample = (uint16_t)(amplitude * offset * (cos(rads + pi)));
           aout.write_u16(sample);
        
       }
}
