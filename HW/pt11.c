#include <stdio.h>
#include <math.h>

int main()
{
    float prize,paise;
    printf("Enter the prize in decimal: ");
    scanf("%f", &prize);

    paise = prize*100;
    printf("Prise in paise: %.2f\n\n", paise);

    return 0;
}