#include <stdio.h>
#include <ctype.h>

int main()
{   
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if(x<10)
    {
        printf("The number %d has 1 digits.\n",x);
    }
    else if(x >= 10 && x < 100)
    {
        printf("The number %d has 2 digits.\n",x);
    }
    else if(x >= 100 && x < 1000)
    {
        printf("The number %d has 3 digits.\n",x);
    }
    else if(x >= 1000 && x < 10000)
    {
        printf("The number %d has 4 digits.\n",x);
    }
    else
    {
        printf("You entered a number which digits is greater than 4.\n");
    }
    return 0;

}

