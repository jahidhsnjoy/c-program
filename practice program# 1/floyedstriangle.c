#include <stdio.h>

int main()
{
    int n,row,col,count=1;

    printf("Enter N= ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    return 0;

}