#include <stdio.h>
#include <math.h>

int main() 
{
    float n, sum;

    printf("Enter the value of n: ");
    scanf("%f", &n);

    sum = (2.0/3)*n*(n+1)*(2*n+1);
    printf("The sum of the series: %.2f\n\n", sum);

    return 0;
}