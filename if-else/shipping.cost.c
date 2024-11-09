#include <stdio.h>
#include <ctype.h>

int main()
{   
    double weight;
    printf("Enter the weight of the package(KG): ");
    scanf("%lf", &weight);

    if(weight <= 1)
    {
        printf("The shipping cost is: 5$.\n");
    }
    else if(weight > 1 && weight <=5)
    {
        printf("The shipping cost is: 10$.\n");
    }
    else if(weight > 5 && weight <=20)
    {
        printf("The shipping cost is: 20$.\n");
    }
    else
        
        printf("The package is too heavy.\n");

    return 0;
    
}