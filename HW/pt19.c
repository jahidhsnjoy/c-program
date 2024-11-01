#include <stdio.h>
#include <math.h>

int main()
{
    float ga, fit, st, rp, hi, net;

    printf("Enter the gross amount: ");
    scanf("%f", &ga);


    fit = ga*(15.0/100);
    st = ga*(3.50/100);
    rp = ga*(5.0/100);
    hi = 750;
    net = ga - ( fit + st + rp + hi);

    printf("\nGross Amount:               %.2f dirhams\n", ga);
    printf("Retirement Plan:            %.2f dirhams\n", fit);
    printf("Health Insurance:           %.2f dirhams\n", st);
    printf("Housing Allowance:          %.2f dirhams\n",rp);
    printf("Transformation allowance:   %.2f dirhams\n", hi);
    printf("Net sallery:                %.2f dirhams\n\n", net);

     return 0;

}