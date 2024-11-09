#include <stdio.h>
#include <math.h>

int main()
{
    double n1, n2, sum, sub, multi, div;
    char operator;

    printf("Enter the two integers : ");
    scanf("%lf %lf", &n1, &n2);

    printf("Enter the oprator : ");
    scanf(" %c", &operator);

    if( operator == '+')
    {
        sum = n1 + n2 ;
        printf("The summation is = %.2lf\n", sum);
    }
    else if( operator == '-')
    {
        sub = n1 - n2 ;
        printf("The subtruction is = %.2lf\n", sub);
    }
    else if( operator == '*')
    {
        multi = n1 * n2 ;
        printf("The multiplication is = %.2lf\n", multi);
    }
    else if( operator == '/')
    {
        div = n1 / n2 ;
        printf("The division is = %.2lf\n", div);
    }
    else
    {

        printf("Invalid operator.\n");
    }
    return 0;
}