#include <stdio.h>

int main()
{
    int i, sum = 0;

    for (i = 100; i < 200; i++)
    {
        if(i%7==0)
        {
            sum += i;
        }
        
    }
    printf("The sum is: %d\n", sum);

    return 0;
}