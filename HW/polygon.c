#include <stdio.h>
#include <math.h>

int main() 
{
    float a ,n ,perimeter, area;

    printf("Enter the number of sides: ");
    scanf("%f", &n);

    printf("Enter the length of a: ");
    scanf("%f", &a);

    perimeter = n * a;
    area = (n * (a*a))/(4 * tan(M_PI/n)); //(M_PI is used instead of 180)

    printf("Perimeter is : %.2f\n", perimeter);
    printf("The area is: %.2f", area);

    return 0;

}