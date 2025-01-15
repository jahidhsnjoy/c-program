#include <stdio.h>

double area(double b,double h)
{
    return 0.5*b*h ;
}

int main(){
    double base,height;
    printf("Enter the base and height of triangle: ");
    scanf("%lf %lf", &base, &height);

    printf("The area of tringle :%.2lf\n", area(base,height));
}