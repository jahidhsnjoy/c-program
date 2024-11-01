#include <stdio.h>
#include <math.h>

int main() 

{
    float x1,y1, x2,y2,x3,y3, area;

    printf("Enter the 1st point: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the 2nd point: ");
    scanf("%f %f", &x2, &y2);           

    printf("Enter the 3rd point: ");
    scanf("%f %f", &x3, &y3);        //fabs is used for absolute value

    area = fabs(x1*(y2-y3) + x2*(y3 -y1) + x3*(y1 - y2))/2; 

    printf("The area of triangle is: %.2f\n\n", area);

    return 0;

}
