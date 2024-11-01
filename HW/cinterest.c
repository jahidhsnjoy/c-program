#include <stdio.h>
#include <math.h>

int main() 

{
    float P, r, t, n, A;

    printf("Enter the initial amount: ");
    scanf("%f", &P);

    printf("Enter the rate of interest: ");
    scanf("%f", &r);

    printf("Enter the time: ");
    scanf("%f", &t);

    printf("Enter the number of times interested is compounded per year: ");
    scanf("%f", &n);

    A = P * pow((1 + r/n), n*t);

    printf("The amount of money including interest: %.2f\n", A);

    return 0;
}