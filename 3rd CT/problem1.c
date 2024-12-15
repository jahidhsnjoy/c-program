#include <stdio.h>
#include <math.h>

int main() {
    int n, prime1,i,j,factor, prime2,semi_prime = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 4) {
        printf("%d is not a semi prime.\n", n);
        return 0;
    }

    for (i = 2; i*i <= n; i++) {
        if (n % i == 0) { 
            factor = n / i;

            prime1 = 1;
            for (j = 2; j*j <= i; j++) {
                if (i % j == 0) {
                    prime1 = 0;
                    break;
                }
            }

            prime2 = 1;
            for (j = 2; j <= sqrt(factor); j++) {
                if (factor % j == 0) {
                    prime2 = 0;
                    break;
                }
            }

            if (prime1==1 && prime2==1) {
                semi_prime = 1;
                break;
            }
        }
    }

    if (semi_prime==1){
        printf("%d is a semi-prime.\n", n);
    }
    else{
        printf("%d is not a semi-prime.\n", n);
    }

    return 0;
}
