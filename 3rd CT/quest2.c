#include <stdio.h>

int main(){
    int L,R,i,j,count,prime=0;

    printf("Enter starting and final number: ");
    scanf("%d %d", &L,&R);

    for(i=L; i<=R; i++){
        count=0;
        if(i<=1){
         continue;
        }
        else
        for(j=2; j<i; j++){
            if(i%j==0){
                count=1;
                break;
            }
            
        }
        if(count==0)
        prime++;
    }

    printf("\nTotal prime number: %d.\n",prime);
    printf("Total composite number: %d.\n",(R-L)-prime);

    return 0;

}
