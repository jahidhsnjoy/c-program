#include <stdio.h>

int main()
{
    int number, i; 

    printf("Please a positive integer: ");
    scanf("%d", &number);

    printf("Factors are : ");

    for(i = 1; i <= number; i++)
    {
        if(number % i ==0)
        {
            printf("%d,",i);
        }
    }
    return 0;


}