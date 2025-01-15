#include <stdio.h>
int main(){
    int matrix[10][10];
    int i,j,r,c;

    printf("Enter the number of row and collum; ");
    scanf("%d %d",&r,&c);

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("Enter value for matrix[%d][%d]:", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int transpose[10][10];

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            transpose[j][i]=matrix[i][j];
        }
    }



    printf("The transpose matrix is :\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;

}