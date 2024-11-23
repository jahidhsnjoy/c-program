#include <stdio.h>

#include <stdio.h>

int main()
{
    int row, col, n;

    printf("How many rows of triangle: ");
    scanf("%d", &n);

    for (row = n; row >= 1; row--)
    {
        for(col=1; col<= n-row; col++)
        {
        printf(" ");
        }
        for(col=1; col<= row; col++)
        printf("*");

        printf("\n");
    }

    return 0;
}