#include <stdio.h>
#include <math.h>

int main() 

{
    float x1,y1, x2,y2, x3,y3, x,y;

    printf("Enter the value of (x1,y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the value of (x2,y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Enter the value of (x3,y3): ");
    scanf("%f %f", &x3, &y3);

    x = (x1 + x2 + x3)/3;
    y = (y1 + y2 + y3)/3;

    printf("The centroid is : (%.2f,%.2f)\n\n",x,y );

    return 0;

}