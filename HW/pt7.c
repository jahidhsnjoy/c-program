#include<stdio.h>
#include<math.h>

int main() 
{
    double ground, hight, sqrtmath, hypotenuse;

    printf("Enter the ground 0f the triangle: ");
    scanf("%lf", &ground);
    printf("Enter the hight 0f the triangle: ");
    scanf("%lf", &hight);

    sqrtmath = (ground*ground) + (hight*hight);
    hypotenuse = sqrt(sqrtmath);

    printf("The length of hypotenuse is = %.2lf\n\n", hypotenuse);

    return 0;
}