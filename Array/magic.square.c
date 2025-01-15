#include <stdio.h>
int main(){
    int matrix[10][10];
    int i,j,n;

    printf("Enter the number of row and collum; ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("Enter value for matrix[%d][%d]:", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum=0,sum_row,sum_col,magic=1;
    
    for(j=0; j<n; j++){
        sum+=matrix[0][j];
    }

    for(i=0; i<n; i++){
        sum_row=sum_col=0;
        for(j=0; j<n; j++){
            sum_row+=matrix[i][j];
            sum_col+=matrix[j][i];
        }
        if(sum_row!=sum || sum_col!=sum){
            magic=0;
            break;
        }
    }

    int sum_diag1 = 0, sum_diag2 = 0;
    for (i = 0; i < n; i++) {
        sum_diag1 += matrix[i][i];           
        sum_diag2 += matrix[i][n-i-1]; 
    }
    if (sum_diag1 != sum || sum_diag2 != sum) {
        magic = 0;
    }

    if(magic==1){
        printf("The matrix is a magic square.\n");
    }
    else{
        printf("The matrix is not a magic square.\n");
    }
    
    return 0;

}