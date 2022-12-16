#include <stdio.h>

int main()
{
    double num1, num2;
    printf("Enter two number: ");

    scanf("%lf %lf", &num1, &num2);
    double add = num1 + num2;
    double sub = num1 - num2;
    double product = num1 * num2;
    double division = num1 / num2;
    //int module = num1 % num2;

    printf("%lf + %lf = %lf\n", num1, num2, add);
    printf("%lf - %lf = %lf\n", num1, num2, sub);
    printf("%lf * %lf = %lf\n", num1, num2, product);
    printf("%lf / %lf = %lf\n", num1, num2, division);
 //   printf("%d %% %d = %d\n", num1, num2, module);
    return 0;
}