#include <stdio.h>
#include <math.h>

int main()              //volume=4/3*3.14*r*r*r
{                       //area= 4*3.14*r*r
    float radious, surface_area;

    printf("Enter the radious: ");
    scanf("%f", &radious);

    surface_area = 4 * 3.14 * pow(radious, 2);

    printf("The surface area of sphere: %.2f\n\n", surface_area);

    return 0;

}
