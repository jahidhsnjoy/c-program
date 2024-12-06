/*#include <stdio.h>
int main(){

    int n,i,sum=0;

    printf("Enter the last number: ");
    scanf("%d",&n);

    printf("2 + 4 + 6 + .... + %d = ",n);

    for(i=2; i<=n; i+=2){
        sum+=i;
    }
    printf("%d;\n", sum);

    return 0;
}
*/

//using while loop

#include <stdio.h>
int main(){

    int n,i=2,sum=0;

    printf("Enter the last number: ");
    scanf("%d",&n);

    printf("2 + 4 + 6 + .... + %d = ",n);

    while(i<=n){
        sum+=i;
        i+=2;
    }
    printf("%d;\n", sum);

    return 0;
}

