#include <stdio.h>

int main()
{
    int number,i,count=0;

    printf("Enter any positive number: ");
    scanf("%d", &number);

    for (i = 2; i < number ; i++)
    {
        if(number%i==0)
        {
            count++;
        }
    }
    if(count==0)
    printf("Prime number.\n");
    else
    printf("Not prime number.\n");
   
    return 0;
}