#include <stdio.h>
int main(){
    int mat1[2][2];
    int i,j;
    int flag=1;

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Enter value for mat1[%d][%d]:", i,j);

            scanf("%d", &mat1[i][j]);
        }
    }

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            if(i==j && mat1[i][j]!=1){
                flag=0;
                break;
            }
            if(i != j && mat1[i][j]==0){
            flag=1;
            break;
            }
        }
    }

    if(flag==1)
    printf("It is identity.\n");
    else
    printf("It is not identity matrix.\n");
    
    return 0;

}