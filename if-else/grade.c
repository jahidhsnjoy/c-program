#include <stdio.h>
#include <ctype.h>

int main()
{   
    int mark;
    printf("Enter student mark: ");
    scanf("%d", &mark);

    if(mark <0 || mark>100)
    {
        printf("You input a invalid mark.\n");
    }
    else if (mark>=80)
    {
        printf("Your Grade : Distinction.\n");
    }
    else if(mark>=70)
    {
       printf("Your Grade : Very Good.\n");
    }
    else if(mark>=60)
    {
       printf("Your Grade : Pass.\n");
    }
    else
    {
       printf("Your Grade : Fail.\n");
    }
    return 0;
    
}