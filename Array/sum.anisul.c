#include <stdio.h>
int main(){

    int num[100],sum=0,n;

    printf("How many numbers: ");
    scanf("%d",&n);

    printf("Enter your numbers: ");

    for(int j=0; j<n; j++){
        scanf("%d", &num[j]);
    }

    for(int i=0; i<n; i++){
        sum+=num[i];
    }

    printf("The sum is : %d\n", sum);
    printf("The avarage is : %.2f\n", (float)sum/n);

 return 0;
    
}