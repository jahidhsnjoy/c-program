#include <stdio.h>
#include <ctype.h>

int main()
{   
    float speed;
    printf("Enter the wind speed(knots): ");
    scanf("%f", &speed);

    if(speed < 1)
    {
        printf("Wind force is : Calm.\n");
    }
    else if(speed >= 1 && speed <=3)
    {
        printf("Wind force is : light air.\n");
    }
    else if(speed >= 4 && speed <=27)
    {
        printf("Wind force is : Breeze.\n");
    }
    else if(speed >= 28 && speed <=47)
    {
        printf("Wind force is : Gale.\n");
    }
    else if(speed >= 48 && speed <=63)
    {
        printf("Wind force is : storm.\n");
    }
    else
    {
        printf("Wind force is : Hurricane.\n");
    }
    return 0;
    
}