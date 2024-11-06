#include <stdio.h>
#include <math.h>

int main()
{   
    double units, bill, totall_bill, totall_with_add;

    printf("Enter the total units = ");
    scanf("%lf", &units);


    if (units <= 200)
    {
        bill = 0.80 * units;
        totall_bill = bill + 100;

        if( totall_bill > 400)
        {
            totall_with_add = totall_bill + (totall_bill*(15.00/100));
            printf(" The estimated charge is = %.2lf\n",totall_with_add);
        }
        else
        {
        printf("The estimated charge is = %.2lf\n", totall_bill);
        }
    }
    else if ( units > 200 && units <= 300)
    {
        bill = 0.90 * units;
        totall_bill = bill + 100;

        if( totall_bill > 400)
        {
            totall_with_add = totall_bill + (totall_bill*(15.00/100));
            printf(" The estimated charge is = %.2lf\n",totall_with_add);
        }
        else
        {
            printf("The estimated charge is = %.2lf\n", totall_bill);
        }
    }
    else
    {
        bill = 1.00 * units;
        totall_bill = bill + 100;

        if( totall_bill > 400)
        {
            totall_with_add = totall_bill + (totall_bill*(15.00/100));
            printf(" The estimated charge is = %.2lf\n",totall_with_add);
        }
        else
        {
        printf("The estimated charge is = %.2lf\n", totall_bill);
        }
    }
    return 0;

}