#include <stdio.h>
#include <math.h>

int main() 

{
    double A1,B1,C1,A2,B2,C2, x, y;

    printf("Enter the value of A,B,C : ");
    scanf("%lf %lf %lf", &A1, &B1, &C1);

    printf("Enter the value A2,B2,C2: ");
    scanf("%lf %lf %lf", &A2, &B2, &C2);

    x = (B1*C2 - B2*C1) / (A1*B2 - A2*B1);
    y = (A2*C1 - A1*C2) / (A1*B2 - A2*B1);

    printf("The intersection point is: (%.1lf,%.1lf)", x,y);

    return 0;

}