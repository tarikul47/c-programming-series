/**
 * Total cans = 1 2 3 4 5 6 7 8 9 10

Harry - 1 2 3 4
      - Harry hit 4 cans
      - Harry don't hit = (Larry hits - 1) = 7 - 1 = 6
      - Harry hits =  6

Larry - 4 5 6 7 8 9 10
      - Larry hist 7 cans
      - Larry don't hit = ( Harry hits - 1) = 4 - 1 =  3
      - Larry hits = 3

*/

#include <stdio.h>

int main()
{
    int harry_shots, larry_shots, harry_not_shots, larry_not_shots;
    scanf("%d %d", &harry_shots, &larry_shots);
    harry_not_shots = larry_shots - 1;
    larry_not_shots = harry_shots - 1;
    printf("%d %d", harry_not_shots, larry_not_shots);
    return 0;
}