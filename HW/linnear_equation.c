#include <stdio.h>
#include <math.h>

int main() 

{
    float a1,b1,c1,a2,b2,c2,x,y;

    printf("Enter the value of a1,b1,c1 : ");
    scanf("%f %f %f", &a1, &b1, &c1);
    
    printf("Enter the value of a2,b2,c1: ");
    scanf("%f %f %f", &a2, &b2, &c2);

    x = (c1*b2 - c2*b1)/(a1*b2 - a2*b1);
    y = (a1*c2 - a2*c1)/(a1*b2 - a2*b1);

    printf("The value of x is : %.2f\n", x);
    printf("The value of y is : %.2f\n\n", y);

    return 0;

}