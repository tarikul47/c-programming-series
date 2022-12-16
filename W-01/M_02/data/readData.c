#include <stdio.h>

int main()
{
    int marks_english;
    int marks_math;
    double temparature;
    // printf("Enter Marks in English: ");
    /// scanf("%d", &marks_english);
    // printf("Enter Marks in Math: ");
    /// scanf("%d", &marks_math);
    printf("Enter Marks English and Temparature : ");
    scanf("%d %lf", &marks_english, &temparature);

    // marks_english = 50;
    // marks_math = 40;40

    //  int totals = marks_english + marks_math;
    // printf("Total Marks = %d\n", totals);44

    printf("marks_english = %d\n temparature = %1f\n", marks_english, temparature);
    return 0;
}