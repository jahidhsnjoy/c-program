#include <stdio.h>
#include <math.h>

int main()

{
    float b2,b1,distance,x,y;

    printf("Enter the value of x,y,b2,b1: ");
    scanf("%f %f %f %f",&x,&y, &b2,&b1);

    distance = fabs(b2-b1)/sqrt(x*x - y*y);
    printf(" The distance  is = %.2f", distance);


    return 0;
}
