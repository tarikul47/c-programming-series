/**
 * Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.
Expected Input/Output:
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444
Hint: Find the total weight and total number of objects and then use it to find the average.
*/

#include <stdio.h>

int main()
{
    float w1, w2;
    float item1, item2;
    printf("Enter number of Items 1: ");
    scanf("%f", &item1);
    printf("Enter number of Items 2: ");
    scanf("%f", &item2);
    printf("Enter weight of Items 1 : ");
    scanf("%f", &w1);
    printf("Enter weight of Items 2 : ");
    scanf("%f", &w2);
    printf("Average value %f", (item1 * w1 + item2 * w2) / (item1 + item2));
    return 0;
}