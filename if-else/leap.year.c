#include <stdio.h>
#include <ctype.h>

int main()
{   
    int year;
    printf("Enter thr year: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is a not a leap year.\n", year);
    }
    return 0;

}