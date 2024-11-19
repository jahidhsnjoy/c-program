#include <stdio.h>
#include <ctype.h>

int main() 
{

    char player1,player2;
    

    printf("Player 1 choice: (R,P,S): ");
    scanf("%c", &player1);
    getchar();
    printf("Player 2 choice: (R,P,S): ");
    scanf("%c", &player2);


    if (player1 == player2) 
    {
        printf("Nobody win.\n");
    } 
    else if ((player1 == 'P' && player2 == 'R') || (player1 == 'R' && player2 == 'S') || (player1 == 'S' && player2 == 'P')) 
    {
        printf("Player 1 wins!\n");
    }
    else if ((player2 == 'P' && player1 == 'R') || (player2 == 'R' && player1 == 'S') || (player2 = 'S' && player1 == 'P')) 
    {
        printf("Player 2 wins.\n");
    }
        printf("invalid input.\n");
    

    return 0;
}
