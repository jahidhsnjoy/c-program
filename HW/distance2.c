#include <stdio.h>
#include <math.h>

int main() 

{
    float A,B,C, x, y, distance;

    printf("Enter the value of A,B,C : ");
    scanf("%f %f %f", &A, &B, &C);

    printf("Enter the value of (x,y): ");
    scanf("%f %f", &x, &y);

    distance = (fabs(A*x + B*y + C)) / (sqrt(A*A + B*B));

    printf("The distance is : %.2f\n\n", distance);

    return 0;

}