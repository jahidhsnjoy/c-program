#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c,s, D, area;

    printf("Enter the values of a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a+b+c)/2;
    D= s*(s-a)*(s-b)*(s-c);

    area = sqrt(D);

    printf("The area of the triangle is : %.2f\n\n", area);

    return 0;

}