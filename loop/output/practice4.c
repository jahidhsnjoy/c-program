#include <stdio.h>
int main(){

    int n,i,sum=0;

    printf("Enter two number: ");
    scanf("%d",&n);

   for(i=1; i<=n; i++){
    if(i%2==0){
        printf("%d ",i);
        sum+=i;
     }
        
    }
    printf("\nThe sum is : %d\n", sum);

    return 0;
}