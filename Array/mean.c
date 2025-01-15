#include <stdio.h>
int main(){

    int num[100],n;
    double sum=0, mean;

    printf("How many numbers: ");
    scanf("%d",&n);

    printf("Enter your numbers: ");

    for(int i=0; i<n; i++){
        scanf("%d", &num[i]);
    }

    for(int i=0; i<n; i++){
        sum+=num[i];
    }
    mean=sum/n;

    printf("Mean of the array is : %.2f\n",mean);

    return 0;
}