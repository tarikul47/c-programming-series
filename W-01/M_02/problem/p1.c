#include <stdio.h>

int main()
{
    float radius;
    printf("Enter a radius: ");
    scanf("%f", &radius);
    float periemter = 2 * 3.14 * radius;
    float area = 3.14 * radius * radius;
    printf("periemter = %.2f\narea = %.2f\n", periemter, area);
    int ab = -10.99;
    printf("%d", ab);
    return 0;
}