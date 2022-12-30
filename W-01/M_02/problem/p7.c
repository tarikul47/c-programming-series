#include <stdio.h>

int main()
{
    /**
     * একটা প্র োগ্রাম লিখ যেটা একটা আয়তক্ষে ত্রের দৈর্ঘ্য আর প্রস্থ ইনপুট নিবে আর তারপর টার
ক্ষে ত্রফল আর পরি সীমা বে র করে দি বে ।
    */
    int lenght, wide;
    printf("Enter height of rectangle: ");
    scanf("%d", &lenght);
    printf("Enter width of rectangle: ");
    scanf("%d", &wide);
    int area = lenght * wide;
    int perimeter = 2 * (lenght + wide);
    printf("Area is %d\nPerimeter is %d", area, perimeter);
    return 0;
}