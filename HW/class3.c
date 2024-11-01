#include <stdio.h>
#include <math.h>

int main()
{
        float final,fixed,sales, bonus, tax;

        printf("Enter the fixed sallery and sales: ");
        scanf("%f %f", &fixed,&sales);

        bonus = (sales*15)/100;
        tax = (fixed*12)/100;

        final = fixed + bonus -tax;

        printf("The final sallery is : %.2f\n\n", final);

        return 0;

}
