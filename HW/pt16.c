#include <stdio.h>
#include <math.h>

int main()
{
    float x,t,m, upper,lower;

    printf("Enter the value of x and t: ");
    scanf("%f %f", &x, &t);

    upper = 24*t - 10*t;
    lower = sqrt(x*t) + 100;
    
    m = (sqrt(upper/lower)) + (1.0/(2*t))*(1.0/(2*t));

    printf("The value of the equation is : %.2f\n\n", m);

    return 0;

}
