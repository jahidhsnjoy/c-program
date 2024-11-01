#include <stdio.h>
#include <math.h>

int main() 
{
    float s, a, b, c, area;

    printf("Enter the length of a,b,c: ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area of triangle is : %.2f\n\n", area);

    return 0;

}