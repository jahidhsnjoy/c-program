#include <stdio.h>
#include <math.h>

int main() 

{
    float initial_amount, total_amount, rate, time, interest;

    printf("Enter the initial amount: ");
    scanf("%f", &initial_amount);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time: ");
    scanf("%f", &time);

    total_amount = initial_amount * pow((1 + rate/100), time);


    interest = total_amount - initial_amount;

    printf("Th compound interest is: %.2f\n", interest);

    return 0;
}