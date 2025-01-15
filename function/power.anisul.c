#include <stdio.h>


int main(){
    double base,exp,result=1,i;
    printf("Enter the base and exp: ");
    scanf("%lf %lf", &base, &exp);

    for(i=0; i<exp;i++){
        result*=base;
    }

    printf("The value is :%.2lf\n", result);
}