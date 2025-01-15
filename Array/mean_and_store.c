#include <stdio.h>
int main(){

    int num[100],n;
    double sum=0, mean,difference;
    float diff[n];

    printf("How many numbers: ");
    scanf("%d",&n);

    printf("Enter your numbers: ");

    for(int i=0; i<n; i++){
        scanf("%d", &num[i]);
        sum+=num[i];
    }

    mean=sum/n;

    for(int i=0; i<n; i++){
     diff[i] = mean-num[i];
    }

    printf("Differences from the mean: ");
    for(int i=0; i<n; i++){
        printf("%.2f ", diff[i]);
    }

    return 0;
}