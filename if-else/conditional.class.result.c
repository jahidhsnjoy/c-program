#include <stdio.h>

int main()
{
    int marks;

    printf("Please Enter your marks: ");
    scanf("%d", &marks);

    (marks>75)?printf("1st Class.\n")
    :(marks>65)?printf("2nd Class.\n")
    :(marks>55)?printf("3rd Class.\n")
    :printf("1st Class.\n");


    return 0;
}