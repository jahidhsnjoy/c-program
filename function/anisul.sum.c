#include <stdio.h>

int sum( int a, int b, int c)
{
    return a+b+c;
}

void sub(int a,int b)
{
    printf("The substruction is: %d\n", a-b);
}


int main(){

     printf("The sum is : %d\n",sum(2,3,5));
     printf("The sum is : %d\n",sum(5,7,5));
     printf("The sum is : %d\n",sum(4,9,8));
     sub(20,10);
}
