#include <stdio.h>
#include <math.h>

int main()
{
    float x, a, Y;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    a = (x-1)/x;
    Y = a + (a*a)/2 + (a*a*a)/3 + (a*a*a*a)/4 ;

    printf("The value of polynomial is: %.2f\n\n", Y);

    return 0;
}
