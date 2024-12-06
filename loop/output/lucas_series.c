#include <stdio.h>
int main(){

    int n,first=2,second=1,i,fibonacci;

    printf("Enter last number: ");
    scanf("%d",&n);

    printf("2,1,");
 
    for(i=3; i<=n; i++){
            fibonacci=first+second;

        printf("%d,", fibonacci);

        first=second;
        second=fibonacci;
    }
    printf("\n");
    return 0;
}