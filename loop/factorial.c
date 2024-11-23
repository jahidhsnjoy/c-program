#include <stdio.h>

int main()
{
    int number, i, factorial = 1; 

    printf("Please Enter your number: ");
    scanf("%d", &number);

    if(number<0)
    {
        printf("Error.negative is not allow");
    }
    else
    {  
        for(i = 1; i<=5; i++)
        {
            factorial = factorial*i;
        }

        printf("The factorial for given number is: %d\n", factorial);

    }
    return 0;

}

