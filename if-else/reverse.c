#include <stdio.h>

int main()
{   
    int n, x, y;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    if (n >= 10 && n <100)
    {
        x = n%10;
        y = n/10;

        printf("The reversed number is : %d%d\n",x,y);
    }
    else
        printf("Please enter a valid number.");
        
    return 0;

}