#include <stdio.h>
#include <math.h>

int main()
{   
    double a,b,c,D,x,x1,x2;

    printf("Enter the value of a,b and c = ");
    scanf("%lf %lf %lf", &a, &b, &c);


    if (a == 0 && b == 0)
    {
        printf("No solution.\n");
    }
     else if ( a == 0)
    {
        x = -(c/b);
        printf("There is only one root.\n x = %.2lf\n", x);
    }
    else
    {
        D = b*b - 4*a*c;
        if(D < 0)
        {
            printf("Complex number.There are no roots.\n");
        }
        else
        {
            x1 = (-b + sqrt(D)) / (2*a);
            x2 = (-b - sqrt(D)) / (2*a);

            printf("The root x1 = %.2lf\n", x1);
            printf("The root x2 = %.2lf\n", x2);

        }

    }
    return 0;

}