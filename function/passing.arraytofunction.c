#include <stdio.h>

void disp(int x[])
{
    for( int i=0; i<5; i++){
        printf("%d ", x[i]);
    }

}
int main(){
    int num[]={10,20,30,40,50};
    disp(num);


}