#include<stdio.h>


int main() {
    float radius, area, circumference;

    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);

    area = 3.14*(radius*radius);
    circumference = 2*3.14*radius;

    printf("The area of the circle is = %.2f\n", area);
    printf("The circumference of the circle is = %.2f\n\n", circumference);

    return 0;

}