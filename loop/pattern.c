#include <stdio.h>

int main()
{
    int row, col;

    for (row = 0; row < 4; row++) 
    {
        
        for (col = 0; col < 4; col++)
        {
            printf("(%d, %d)\t", row, col);
        }

        printf("\n\n");
    }

    return 0;
}
