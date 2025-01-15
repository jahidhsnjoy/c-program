#include <stdio.h>
int main(){
    int disp1[2][2],disp2[2][2];
    int i,j,k;

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Enter value for disp1[%d][%d]:", i,j);

            scanf("%d", &disp1[i][j]);
        }
    }

     for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Enter value for disp2[%d][%d]:", i,j);

            scanf("%d", &disp2[i][j]);
        }
    }

    int product[2][2];

     for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            product[i][j] = 0;
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                product[i][j] += disp1[i][k] * disp2[k][j];
            }
        }
    }

    printf("Two product of two matrixs:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d", product[j][i]);
        }
        printf("\n");
    }
    return 0;

}