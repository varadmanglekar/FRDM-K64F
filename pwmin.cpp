#include "mbed.h"
#include "PwmIn.h"

PwmOut x(p21);
PwmOut y(p22);

PwmIn a(p5);
PwmIn b(p6);

int main() {
    x = 0.5;
    y = 0.2;
    while(1) {
        printf("a: pw = %f, period = %f\n", a.pulsewidth(), a.period());
        printf("b: pw = %f, period = %f\n", b.pulsewidth(), b.period());
        wait(2);
    }
}
