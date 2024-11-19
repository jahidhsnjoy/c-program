#include <stdio.h>

int main()
{
    int year;

    printf("Enter a number: ");
    scanf("%d", &year);

    (year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0)?printf("The given year is leap year.\n"):printf("The given year is not leap year.\n");

    return 0;

    }