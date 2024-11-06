#include <stdio.h>
#include <ctype.h>

int main()
{   
    float income,tax;
    printf("Enter user income: ");
    scanf("%f", &income);

    if(income<=0)
    {
        printf("Income can't be negative or zero.\n");
    }
    else if(income <= 750)
    {
        tax = income*(1.00/100);
        printf("Tax due = %.2f\n", tax);
    }
    else if(income > 750 && income <= 2250)
    {
        tax = income*(2.00/100) + 7.50;
        printf("Tax due = %.2f\n", tax);
    }
    else if(income > 2250 && income <= 3750)
    {
        tax =income*(3.00/100) + 37.50;
        printf("Tax due = %.2f\n", tax);
    }
    else if(income > 3750 && income <= 5250)
    {
        tax = income*(4.00/100) + 82.50;
        printf("Tax due = %.2f\n", tax);
    }
    else if(income > 5250 && income <= 7000)
    {
        tax = income*(5.00/100) + 142.50;
        printf("Tax due = %.2f\n", tax);
    }
    else
    {
        tax = income*(6.00/100) + 230.00;
        printf("Tax due = %.2f\n", tax);
    }
    return 0;
    
}