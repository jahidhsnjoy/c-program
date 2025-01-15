#include <stdio.h>
int main(){
int arr[5] = {4, 8, 15, 23, 42}, i, found;

for(i=0; i<5; i++){
    if(arr[i] == 23){
        found = 1;
        break;
        }
    else{
    found = 0;
    }
}

if(found == 1)
{
printf("Found\n");
}
else{
printf("Not Found\n");
}
}