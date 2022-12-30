#include <stdio.h>

int main()
{

    /**
     * 7. একটা প্র োগ্রাম লিখ যেটা ত োমার উচ্চতা ইনপুট নিবে ইঞ্চিতে , তারপর সে টাকে ফুট আর ইঞ্চি
ফরম্যাট এ আউটপুট দি বে ।
    */

    int height;
    printf("Enter your height: ");
    scanf("%d", &height);
    int foot = height / 12;
    int inchi = height % 12;
    printf("Your height is %.0d feet %d inches\n", foot, inchi);
    return 0;
}