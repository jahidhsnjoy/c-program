#include <stdio.h>
#include <math.h>

int main()
{
    float P, V, M, T; //room temoperature 77 degree fahrenhiet

    printf("Enter the pressue , volume and temperature: ");
    scanf("%f %f %f", &P, &V, &T);

    M = (P*V)/(0.37*(T + 460));

    printf("The mass of air: %.2f pounds.\n\n", M);

    return 0;

}

