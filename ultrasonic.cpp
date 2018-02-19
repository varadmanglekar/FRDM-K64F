#include "mbed.h"
#include "hcsr04.h"

Serial pc(USBTX, USBRX); // tx, rx
HCSR04 sensor(A3,A2); // Trigger , Echo
int main(){
    pc.baud(9600);
    while(1){
        long distance = sensor.distance();   
        pc.printf("distance  %d  \n",distance);
        wait(1.0); // 1 sec  
    }
}
