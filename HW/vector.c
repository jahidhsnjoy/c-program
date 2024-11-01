#include <stdio.h>
#include <math.h>

int main() {
    double Ax, Ay, Az, Bx, By, Bz, dot, A, B, cosine;

    printf("Enter the components of vector A (Ax Ay Az): ");
    scanf("%lf %lf %lf", &Ax, &Ay, &Az);

    printf("Enter the components of vector B (Bx By Bz): ");
    scanf("%lf %lf %lf", &Bx, &By, &Bz);

    dot = Ax * Bx + Ay * By + Az*Bz;

    A = sqrt(Ax * Ax + Ay * Ay + Az * Az);
    B = sqrt(Bx * Bx + By * By + Bz * Bz);

    cosine = dot / (A * B);
    printf("Cosine of the angle is: %.2lf\n\n", cosine);
    

    return 0;
}
