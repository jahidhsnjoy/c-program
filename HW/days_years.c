#include <stdio.h>
#include <math.h>

int main() 

{
    float days, years;

    printf("Enter the number of days: ");
    scanf("%f", &days);

    years = days/365;

    printf("The number of years: %.2f\n\n", years);

    return 0;

}