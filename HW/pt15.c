#include <stdio.h>
#include <math.h>

int main()
{
    float x, y1, y2;

    printf("Enter the value of x : ");
    scanf("%f", &x);

    y1 = (3*pow(x,3)) + sqrt(x)*2 - 2; // y1=f(x)
    y2 = (5*y1*y1*y1) - 4;  // y2= (gof)(x)

    printf("The value of (gof)(x) is : %.2f\n\n", y2);

    return 0;

}