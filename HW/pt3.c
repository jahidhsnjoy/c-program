#include <stdio.h>

int main() {
    float F, C;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);

    C = (5.0/9)*(F-32);

    printf("%.2f Degree Fahrenhiet = %.2f Degree Celcius.\n\n",F,C);

    return 0;

}