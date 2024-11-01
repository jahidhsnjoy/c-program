#include <stdio.h>

int main() {
    float inches, centimeters;

    printf("Enter length in inches: ");
    scanf("%f", &inches);

    centimeters = inches * 2.54;
    printf("%.2f inches = %.2f centimeters.\n\n", inches, centimeters);

    return 0;
}