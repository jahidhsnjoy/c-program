#include <stdio.h>
#include <math.h>

int main()

{
    float P,R,T,EMI,x,y;

    printf("Enter the value of P,R,T: ");
    scanf("%f %f %f", &P,&R,&T);

    x= R/(12*100);
    y= 12*T;

    EMI = P*x*(pow((1+x),y)) / (pow((1+x),y) -1);

    printf(" The EMI value is = %.2f", EMI);


    return 0;
}
