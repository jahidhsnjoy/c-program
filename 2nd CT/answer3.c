#include <stdio.h>

int main()
{
    double l1,l2,l3,l4,quad1,quad2;

    printf("Enter four sides and 2 diagonals of quadrilateral : ");
    scanf("%lf %lf %lf %lf %lf %lf", &l1,&l2,&l3,&l4,&quad1,&quad2);

    if(l1==l2 && l2==l3 && l3 == l4 && quad1==quad2)
    {
        printf("Square.\n");
    }
    else if(l1 == l2 && l2==l3 && l3 == l4 && quad1!=quad2)
    {
        printf("Rhombus.\n");
    }
    else if(l1 == l3 && l2==l4 && quad1==quad2)
    {
        printf("Rectangular.\n");
    }
    else if((l1 == l3 && l2 != l4) || (l2 == l4 && l1 != l3))
    {
        printf("Trapezium.\n");
    }
    else
    {
        printf("Unknown quadriliteral.\n");
    }
    return 0;
}