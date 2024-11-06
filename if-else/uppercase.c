#include <stdio.h>
#include <ctype.h>

int main()
{   
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    if(isupper(ch))
    {
        ch = tolower(ch);
    }
    else
    {
       ch = toupper(ch);
    }
    printf("After the conversion : %c\n", ch);
    return 0;

}