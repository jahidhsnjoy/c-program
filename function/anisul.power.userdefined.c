#include <stdio.h>

void power(double base,double exp)
{
    double result=1,i;
    for(i=1; i<=exp;i++){
        result*=base;
    }
    printf("The value : %.2lf", result);

}

int main(){
    double base,exp;
    printf("Enter the base and exp: ");
    scanf("%lf %lf", &base, &exp);

    power(base,exp);
}

    