#include <stdio.h>

int main()
{
    int x = 5,y;

    y = ++x;
    printf("The value is %d\n", y);
    x+=3;
    printf("The value is %d\n", x);
    x-= 2;
    printf("The value is %d\n", x);
    x--;
    printf("The value is %d\n", x);
    
    return 0;
}

//exam a asbe difference among x++ , ++x , y= x++ , y = ++x