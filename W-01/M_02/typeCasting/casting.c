#include <stdio.h>

int main()
{
    // 8 / 3 = 2.666667

    int num1 = 8;
    int num2 = 3;

    double total = (double)num1 / (double)num2;
    printf("%d / %d = %lf", num1, num2, total);
    return 0;
}