#include<stdio.h>

int fact(int n){
    if(n<=1)
        return(1);
    else
        return(n*fact(n-1));
}

void main(){
    int n;

    printf("Enter n= ");
    scanf("%d",&n);

    printf("Factorial of this number= %d", fact(n));
}
