#include <stdio.h>
#include <math.h>

int main() 

{
    double x1,y1, x2,y2,x,y, distance;

    printf("Enter the value of (x1,y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the value of (x2,y2): ");
    scanf("%lf %lf", &x2, &y2);

    x = x2 - x1;
    y = y2 - y1;

    distance = sqrt(pow(x, 2) - pow(y, 2));

    printf("The distance is : %.2lf\n\n", distance);

    return 0;

}

