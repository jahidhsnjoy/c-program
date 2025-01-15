#include <stdio.h>

int max(int x[])
{
    int i;
    int max=x[0];
    for( i=0; i<5; i++){
        if(max<x[i])
            max=x[i];
    }
    return max;

}
int main(){
    int num[]={10,20,30,40,50};
    int maxvalue=max(num);
    printf("The value is : %d",maxvalue);


}