#include "mbed.h"

//Digital output declaration
DigitalOut Blue(LED3);

//Serial port (UART) configuration
Serial pc(USBTX,USBRX);

int main() 
{
    Blue=1;
    pc.printf("Serial code example\r\n");     
    while(1)
    {
        Blue=0;
        pc.putc(pc.getc());
    }
    
}
