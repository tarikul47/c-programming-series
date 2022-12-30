#include <stdio.h>

int main()
{
    // 1 2 3 4 5 6 7 8 9 10
    // Harry short =  1 2 3 4
    // Harry not shot = larry shot -  1 = 7 - 1 = 6
    // larry shot = 4 5 6 7 8 9 10
    // larry not short = harry shot - 1 = 4 - 1 = 3

    int harry_short, larry_short;
    scanf("%d %d", &harry_short, &larry_short);
    printf("%d %d", larry_short - 1, harry_short - 1);
    return 0;
}