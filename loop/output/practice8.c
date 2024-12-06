#include <stdio.h>
int main(){

    int n,i,result=1;

    printf("Enter number: ");
    scanf("%d",&n);
 
    for(i=1; i<=n; i++){
        result = result*i;

        if(i==1)
        printf("1*");
        else if(i==n)
        printf("%d",n);
        else
        printf("%d*",i);

       }
    printf(" = %d \n", result);

    return 0;
}