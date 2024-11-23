#include <stdio.h>

int main()
{
    int row, col, n;

    printf("How many rows of square: ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for(col =1; col<=n-row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= n; col++)
        {
            printf("*");
        }
      
        printf("\n");
    }
    return 0;
}