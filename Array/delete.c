#include<stdio.h>
#include<stdlib.h>
int main(){
   
   int i,j,n=100,k=51,item,la[100];

   for(i=0; i<100; i++){
    la[i]= rand()%1000;

    item=la[k];

    for(j=k; j<=n-1; j++){
        la[j]=la[j+1];

        n=n-1;
    }
  }

  printf("ITEM %d deleted from position %d. \n",item,k);

  return 0;
}
