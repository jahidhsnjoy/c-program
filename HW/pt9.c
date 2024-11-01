#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, D, root1, root2;

    printf("Enter the values of a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 1;
    }

    D = b * b - 4 * a * c;

    if (D < 0) {
        printf("The roots are complex.\n");
    }

    else {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);

        printf("The roots are: x1 = %.2f and x2 = %.2f\n", root1, root2);
    }

    return 0;
}