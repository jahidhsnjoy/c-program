#include <stdio.h>
#include <math.h>

int main()
{
        float hours, rate, bonus, tax, gross, net;

        printf("Enter the given hour and rate: ");
        scanf("%f %f", &hours, &rate);

        gross = hours*rate;
        printf("\nGross pay is: %.2f\n", gross);

        bonus = gross*(7.0/100);
        tax = gross*(5.0/100);

        net = gross + bonus - tax;

        printf("Net pay is: %.2f\n\n", net);

        return 0;

}