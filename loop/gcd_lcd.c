#include <stdio.h>

int main()
{
    int number1,number2,gcd,lcm,reminder,n1,n2;

    printf("Enter two positive number: ");
    scanf("%d %d", &number1, &number2);

    n1=number1;
    n2=number2;

    while (n2 != 0)
    {
        reminder = n1 % n2;
        n1 = n2;
        n2 = reminder;
    }

    gcd = n1;
    lcm = (number1*number2)/gcd;

    printf("The GCD is = %d\n",gcd);
    printf("The LCM is = %d\n",lcm);

    return 0;
    
}