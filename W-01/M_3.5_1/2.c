/**
 * Write a C program that accepts two integers from the user and calculate the product of the two integers.
 * 
    Expected Input/Output:
        Input the first integer: 25
        Input the second integer: 15

    Expected Output:
        Product of the above two integers = 375
*/

#include <stdio.h>
    
int main()
{
    int num1, num2;
    printf("Input the first integer: ");
    scanf("%d", &num1);

    printf("Input the second integer ");
    scanf("%d", &num2);

    printf("Product of the above two integers = %d\n", num1 * num2);
    return 0;
}