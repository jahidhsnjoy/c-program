#include <stdio.h>

int main() {
    int mat[10][10], n, m, i, j, sum1 = 0,sum2=0;

    printf("Enter the number of rows (N) and columns (M): ");
    scanf("%d %d", &n, &m);

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("Enter value for matrix[%d][%d]:", i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Sum of alternate elements: ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if ((i + j) % 2 == 0) { 
                sum1 += mat[i][j];
            }
            else{
                sum2 +=mat[i][j];
            }
        }
    }

    printf("Sum of alternate elements :%d, %d\n", sum1,sum2);
    return 0;
}
