#include <stdio.h>

int main()
{
        float a, b, add,sub,mul,div;

        printf("Enter values of two integers a and b: ");
        scanf("%f %f", &a, &b);

        add = a+b;
        sub = a-b;
        mul = a*b;
        div = a/b;

        printf("Summation = %.f\n", add);
        printf("Subtraction = %.f\n", sub);
        printf("Multiplication = %.f\n", mul);
        printf("Division = %.2f\n", div);

        return 0;

}
