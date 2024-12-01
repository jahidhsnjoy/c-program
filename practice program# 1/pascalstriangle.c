#include <stdio.h>

int main()
{
    int n,row,col, coef = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (row = 0; row < n; row++)
    {
        for (col = 1; col <= n - row; col++) 
        {
        printf("  ");
        }
        for (col = 0; col <= row; col++) 
        {
            if (col == 0 || row == 0)
                coef = 1; 
            else
                coef = coef * (row - col + 1) / col;

            printf("%4d", coef);
        }
        printf("\n");
    }

    return 0;
}





