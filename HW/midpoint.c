#include <stdio.h>
#include <math.h>

int main() 

{
    double x1,y1, x2,y2,x,y;

    printf("Enter the value of (x1,y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the value of (x2,y2): ");
    scanf("%lf %lf", &x2, &y2);

    x = (x1 + x2)/2;
    y = (y1 + y2)/2;

    printf("The midpoint is : (%.2lf,%.2lf)\n\n",x,y );

    return 0;

}