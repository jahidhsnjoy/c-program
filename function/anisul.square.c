#include <stdio.h>

int square(int a)
{
    return a*a ;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The square of the number is :%d\n", square(num));
}