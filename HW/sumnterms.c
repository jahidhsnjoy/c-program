#include <stdio.h>
#include <math.h>

int main() 
{
    float s, a ,n ,d;

    printf("Enter the first term: ");
    scanf("%f", &a);

    printf("Enter the number of terms: ");
    scanf("%f", &n);

    printf("Enter the common difference between terms: ");
    scanf("%f", &d);

    s = n/2*(2*a + (n - 1)*d);

    printf("The sum of the first %.f terms is : %.2f\n\n", n, s);

    return 0;

}