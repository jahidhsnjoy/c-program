#include <stdio.h>

int main()
{
    int row, col, n;

    printf("How many rows of triangle: ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("* ");
        }
      
        printf("\n");
    }
    return 0;
}
