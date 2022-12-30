/**
 * Write a C program to input temperature in Centigrade and convert to Fahrenheit.
Example Input
Enter temperature in Celsius = 100
Output
Temperature in Fahrenheit = 212.0 F
Hint: Temperature conversion formula from degree Celsius to Fahrenheit is given by -
*/

#include <stdio.h>

int main()
{
    float temperature;
    printf("Enter temperature in Celsius = ");
    scanf("%f", &temperature);

    printf("Temperature in Fahrenheit = %0.1f\n", (temperature * 9) / 5 + 32); // 

    return 0;

}