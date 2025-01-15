#include <stdio.h>

    void cal(int x, int y, int *add, int *sub)
    {
        *add=x+y;
        *sub=x-y;
    }

    void main(){
        int a=20, b=11, p,q;
        cal(a,b,&p,&q);
        printf("sum= %d, sub= %d",p,q);
    }
