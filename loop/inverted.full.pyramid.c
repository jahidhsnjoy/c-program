#include <stdio.h>

int main()
{
    int row, col, n;

    printf("How many rows of inverted triangle: ");
    scanf("%d", &n);

    for (row = n; row >= 1; row--)
    {
        for (col = 1; col <= (n - row); col++)
        {
            printf(" ");
        }

        for (col = 1; col <= (2 * row - 1); col++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
