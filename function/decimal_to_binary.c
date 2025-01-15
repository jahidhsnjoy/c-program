#include <stdio.h>

void dectobin(int num){
    int remaining=0;
    if(num==0){
        printf("%d", num);
    }
    else{
        remaining = num%2;
        dectobin(num/2);
        printf("%d", remaining);
    }
}

int main(){
    int i=6;
    dectobin(i);
}