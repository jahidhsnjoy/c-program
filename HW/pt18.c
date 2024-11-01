#include <stdio.h>
#include <math.h>

int main()
{
    float ga, rp,hi, ha, ta, ns;

    printf("Enter the gross amount: ");
    scanf("%f", &ga);

    printf("\n\nGross Amount: %.2f\n", ga);
    printf("****************************************\n");

    rp = ga*(5.0/100);
    hi = 750;
    ha = ga*(20.0/100);
    ta = 200;

    printf("Retirement Plan:          -%.2f AED\n", rp);
    printf("Health Insurance:         -%.2f AED\n", hi);
    printf("Housing Allowance:        +%.2f AED\n", ha);
    printf("Transformation allowance: +%.2f AED\n", ta);
    printf("****************************************\n");

    ns= (ga + ha + ta) - (rp + hi);
    printf("Net Sallery:              %.2f AED\n\n", ns);

     return 0;

}

