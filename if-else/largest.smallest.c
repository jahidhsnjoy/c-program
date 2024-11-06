#include <stdio.h>
#include <ctype.h>

int main()
{   
    int n1, n2, n3, n4, largest, smallest;
    printf("Enter four integers: ");
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);

    largest = smallest = n1;

    if (n2 > largest) {
        largest = n2;
    }
    if (n2 < smallest) {
        smallest = n2;
    }

    if (n3 > largest) {
        largest = n3;
    }
    if (n3 < smallest) {
        smallest = n3;
    }

    if (n4 > largest) {
        largest = n4;
    }
    if (n4 < smallest) {
        smallest = n4;
    }

    printf("Largest integer is : %d\n", largest);
    printf("Smallest integer is : %d\n", smallest);

    return 0;
}