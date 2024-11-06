#include <stdio.h>
#include <math.h>

int main()
{   
    double math,physics, chemistry, tm, mp ;

    printf("Enter the marks of math,physics and chemistry: ");
    scanf("%lf %lf %lf", &math, &physics, &chemistry);

    mp = math + physics;
    tm = math + physics + chemistry;

    if(math>=60 && physics >= 50 && chemistry >= 40 && tm >= 200)
    {
        printf("The student is eligible for the admission.\n");
    }
    else if( mp >= 150 )
    {
        printf("The student is eligible for  the admission.\n");
    }
    else
    {
        printf("The student is not eligible for admission.\n");
    }
    return 0;

}
    