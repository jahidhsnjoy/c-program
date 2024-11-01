#include <stdio.h>
#include <math.h>

int main() 

{
    float b,n,k, K;

    printf("Enter the value of b,n,k: ");
    scanf("%f %f %f", &b, &n, &k);

    K = ((b-(n-1)*(k-1))/2);
  
    printf("The value of k: %.2f\n", K);

    return 0;
}
