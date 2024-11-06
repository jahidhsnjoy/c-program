#include <stdio.h>
#include <ctype.h>

int main()
{   
    int x;
    printf("Enter the value: ");
    scanf("%d", &x);

    switch (x)
    {
        case 1: printf("One.\n");
                break;
        case 2: printf("Two.\n");
                break;
        case 3: printf("Three.\n");
                break;
        case 4: printf("Four.\n");
                break;
        case 5: printf("Five.\n");
                break;
        default:printf("The number is not in the range of (1-5).\n");
    
    }
    return 0;

}