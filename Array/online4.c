#include <stdio.h>
int main(){
    int data[5];

    printf("Store value in an array(5 integers): ");

    for( int i=0; i<5; i++){
        scanf("%d", &data[i]);
    }

    printf("Print store value: ");

    for( int i=0; i<5; i++){
        printf("%d", data[i]);
    }

    return 0;

}