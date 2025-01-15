#include <stdio.h>
int main(){
    int disp1[2][2],disp2[2][2];
    int i,j;

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

    int dispsum[2][2];

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            dispsum[i][j]=disp1[i][j] + disp2[i][j];
        }
    }



    printf("Two dimentional array of sum elements:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d", dispsum[j][i]);
        }
        printf("\n");
    }
    return 0;

}