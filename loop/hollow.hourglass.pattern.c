#include <stdio.h>

int main() 
{
    int n, row, col;

    printf("How many rows for inverted hollow full pattern pyramid: ");
    scanf("%d", &n);

    for (row=n; row>=1; row--) 
    {
        for (col=1; col<=2*n-1; col++) 
        {
            if (row==n || row+col==n+1 || col-row==n-1) 
            {
                printf("* ");
            } 
            else 
            {
                printf("  ");
            }
        }

        for (row=1; row<=n-row; row++) 
        {
            printf("  ");
        }
        for (col=1; col<=2*row-1; col++) 
        {
            if (col==1 || col==2*row-1) 
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

    return 0;
}