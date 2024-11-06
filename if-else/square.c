#include <stdio.h>

int main()
{   
    int n,x;
    printf("Enter the number: ");
    scanf("%d", &n);

    if(n<10)
    {
        printf("%d is less than 10.\n", n);
        x = n*n;
        printf("Square is = %d.\n\n",x);
    }
    return 0;

}