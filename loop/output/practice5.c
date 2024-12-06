#include <stdio.h>
int main(){

    float i,sum=0,n;

    printf("Enter number: ");
    scanf("%f",&n);

 printf("1 + 2.5 + 3.5 + .... + %.f.5 = ",n); 
 
    for(i=1.5; i<=n; i++){
        sum+=i;
    }
    printf("%.2f;\n", sum);

    return 0;
}