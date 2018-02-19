#include "LidarLitev2.h"


LidarLitev2 Lidar(p28, p27);
Serial pc(USBTX,USBRX);


Timer dt;
int main()
{   
    
    pc.baud(9600);
    Lidar.configure();
    dt.start();
    while(1){
         pc.printf("distance = %d cm frequency = %.2f Hz\n", Lidar.distance(), 1/dt.read());
         dt.reset();
    }
}
