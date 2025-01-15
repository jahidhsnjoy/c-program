#include <stdio.h>
int main(){

    int num[]={10,2,30,15,28,5,46,85};
    int value,position=-1;

    printf("Enter the value you want to search : ");
    scanf("%d", &value);

    for(int i=0; i<8; i++){
        if(value==num[i]){
            position=i+1;
            break;
        }
    }

    if(position==-1){
        printf("The value is not found.\n");
    }
    else
    printf("The value is found at %dth place.\n", position);

    return 0;
    
}