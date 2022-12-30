#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter two number: ");
    scanf("%d %d", &x, &y); // x = 5 , y = 0
    printf(" Result: %d\n", x / y); //5 /0
    return 0;
}

// input 5, 0 