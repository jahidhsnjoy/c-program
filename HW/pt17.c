#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,d,m;

    printf("Enter the value of a,b,c and d: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    m = (a-b)/(c+4*d) + sqrt(sqrt((a-b)/(c+d)));

    printf("The value of the equation is : %.2f\n\n", m);

    return 0;

}
