#include "mbed.h"
#include "Servo.h"

Servo myservo(p21);

int main() {    
    for(float p=0; p<1.0; p += 0.1) {
        myservo = p;
        wait(0.2);
    }
}
