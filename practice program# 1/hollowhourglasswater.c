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
            printf("  ");
        }
        for(col=1; col<=2*row-1; col++)
        {
            if(row==n || col==1 || col==2*row-1 )
            {
            printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        
        printf("\n");
    } 

    for(row=2; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf("  ");
        }
        for(col=1; col<=2*row-1; col++)
        {
            if(row==n || col==1 || col==2*row-1)
            printf("* ");
            else
            printf("  ");
        }
        
        printf("\n");
    } 

    
    return 0;

}