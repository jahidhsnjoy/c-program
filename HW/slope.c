#include <stdio.h>
#include <math.h>

int main() 

{
    double x1,y1, x2,y2,x,y, slope;

    printf("Enter the value of (x1,y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the value of (x2,y2): ");
    scanf("%lf %lf", &x2, &y2);

    slope = (y2 - y1) / (x2 - x1);

    printf("The sloppe is : %.2f\n\n", slope);

    return 0;

}