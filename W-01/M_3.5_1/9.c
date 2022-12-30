/**
 * Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
Test Data :
Input no. of days: 2535
Expected Output:
6 Year(s)
11 Month(s)
15 Day(s)
Hint: It is similar to the Feet-Inches problem. First find the number of years and the remaining number of days. Then convert the remaining number of days into months and days.
*/

#include <stdio.h>

int main()
{
    int ndays, y, m, d;

    printf("Input no. of days: ");

    scanf("%d", &ndays);

    y = (int)ndays / 365;  

    ndays = ndays - (365 * y);

    m = (int)ndays / 30;

    d = (int)ndays - (m * 30);

    printf(" %d Year(s) \n %d Month(s) \n %d Day(s)", y, m, d);
    return 0;
}

/**
 * Number of days [ndays] = 2535
 * 
 * year = 2535 / 365 =  6 years 
 * 
 * rest of days [ndays]= 2535 - (6* 365) = 345 days 
 * 
 * Month = ndays / 30
 * 
 * days = ndays / (month * 30)
*/