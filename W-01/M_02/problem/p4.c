#include <stdio.h>

int main()
{
    /**
     * Hello
     *  nice
     *    to
     *  meet
     *   you
     */
    char str1[] = "Hello";
    char str2[] = "nice";
    char str3[] = "to";
    char str4[] = "meet";
    char str5[] = "you";

    // check long word [Hello =  5 letter / block so we should set 5 ]
    printf("%5s\n", str1);
    printf("%5s\n", str2);
    printf("%5s\n", str3);
    printf("%5s\n", str4);
    printf("%5s\n", str5);
    return 0;
}

