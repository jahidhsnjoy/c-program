#include <stdio.h>

int main()
{
    int n,row,col;

    printf("Enter N= ");
    scanf("%d",&n);

    for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=n-1; col++)
        {
            printf("* ");
        }
        
        printf("\n");

        
    } 
    return 0;

}