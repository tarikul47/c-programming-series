/**
 * Write a C program to input temperature in degree Fahrenheit and convert it to degree Centigrade.
Example Input
Temperature in fahrenheit = 205
Output
Temperature in celsius = 96.11 C
Hint: Formula to convert from degree Fahrenheit to degree Celsius is given by
*/

#include <stdio.h>

int main()
{
    float temperature;
    printf("Enter Temperature in fahrenheit = ");
    scanf("%f", &temperature);

    printf("Temperature in celsius = %0.2f\n", (temperature - 32) * 5/ 9); //

    return 0;
}
