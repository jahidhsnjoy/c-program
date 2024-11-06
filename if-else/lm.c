#include <stdio.h>
#include <math.h>

int main()
{   
    double a,b,c,D,x1,x2;

    printf("Enter the value of a,b and c = ");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = b*b - 4*a*c;
    x1 = (-b + sqrt(D)) / (2*a);
    x2 = (-b - sqrt(D)) / (2*a);

    if (D < 0)
    {
        printf("The roots are imaginery number.\n");
    }
    else
    {
        printf("The root x1 = %.2lf\n", x1);
        printf("The root x2 = %.2lf\n", x2);
    }
    return 0;

}
