#include <stdio.h>
#include <math.h>

int main() 

{
    double x1,y1,x2,y2,x3,y3, area;

    printf("Enter the value of (x1,y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the value of (x2,y2): ");
    scanf("%lf %lf", &x2, &y2);

    printf("Enter the value of (x3,y3): ");
    scanf("%lf %lf", &x3, &y3);

    area = (1.0/2) * fabs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));

    if (area == 0) {
        printf("The points are collinear.\n");
    }
     else{
        printf("The points are not collinear.");
     }


    return 0;

}
