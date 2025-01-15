#include <stdio.h>
int main(){

    int data[]={8,2,5,9,1},n=5,item=2,loc;

    data[n+1]=item;
    loc=1;

    while(data[loc]!=item){
        loc+=1;
    }

    if(loc==n+1){
        loc=0;
        printf("Item not found.\n");
    }
    else{
        printf("The item is found at position %d \n", loc+1);
    }
    return 0;

}