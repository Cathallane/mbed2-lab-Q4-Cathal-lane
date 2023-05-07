#include "mbed.h"

AnalogIn pot1(A0);
AnalogIn pot2(A1);

PwmOut red(LED1);
PwmOut green(LED2);

int main()
{
    // reading and assigning values
    while (1) {
        float pot1_value = pot1.read();
        float pot2_value = pot2.read();
        
        float red_value = pot1_value;
        float green_value = pot2_value;
        
        red = red_value;
        green = green_value;
        
        printf("Pot1: %f\tPot2: %f\n", pot1_value, pot2_value);

        wait(0.05); //waiting time
    }
}