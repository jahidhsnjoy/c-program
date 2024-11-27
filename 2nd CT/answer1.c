#include <stdio.h>
#include <math.h>

int main()
{   
    float r1,r2,x1,y1,x2,y2,distance1,distance2;

    printf("Enter the radias of circle 1 and circle 2: ");
    scanf("%f %f",&r1, &r2);

    printf("Enter two centres : ");
    scanf("%f %f %f %f",&x1, &y1, &x2, &y2);

    distance1 = r1+r2;
    distance2 = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));

    if (distance1== distance2) 
    {
        printf("The circles touch externally.\n");
    } 
    else if (distance2 <= fabs(r1 - r2))
    {
        printf("One circle lies inside the other.\n");
    }
    else if (distance2 < (r1 + r2)) {
        printf("The circles intersect.\n");
    }
    else
    {
        printf("The circles do not intersect or touch.\n");
    }

    return 0;

}