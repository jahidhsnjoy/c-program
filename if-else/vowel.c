#include <stdio.h>

int main()
{   
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("The given character is vowel.\n");
    }
    else
    {
        printf("The given character is consanant.\n");
    }
    return 0;

}