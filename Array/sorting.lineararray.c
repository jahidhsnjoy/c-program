#include <stdio.h>              //(n-1) bar process ta calate hobe.
int main(){

    int data[10]={10,9,8,7,6,5,4,3,2,1}, n=10;
    int ptr, temp,i;

    for(i=0; i<(n-1); i++){
    for(ptr=0; ptr<(n-1-i); ptr++){
        if(data[ptr]>data[ptr+1]){
            temp=data[ptr];
            data[ptr]=data[ptr+1];
            data[ptr+1]=temp;
            }
        }
    }

    printf("After sorting the array: \n");

    for(i=0; i<n; i++){
        printf(" %d", data[i]);
    }
    printf("\n");
    return 0;
                              
}