
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    // Take input from both the players
    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");

    // Has to assign the value to all the alphabets
    int sum1 = 0;
    for (int i = 0, s = strlen(player1); i < s; i++)
    {
        // printf("%c\n", tolower(player1[i]));
        if (tolower(player1[i]) == 'a' || tolower(player1[i]) == 'e' ||
            tolower(player1[i]) == 'i' || tolower(player1[i]) == 'l' || tolower(player1[i]) == 'n')
        {
            sum1++;
        }
        else if (tolower(player1[i]) == 'o' || tolower(player1[i]) == 'r' ||
                 tolower(player1[i]) == 's' || tolower(player1[i]) == 't' ||
                 tolower(player1[i]) == 'u')
        {
            sum1++;
        }
        else if (tolower(player1[i]) == 'b' || tolower(player1[i]) == 'c' ||
                 tolower(player1[i]) == 'm' || tolower(player1[i]) == 'p')
        {
            sum1 += 3;
        }
        else if (tolower(player1[i]) == 'd' || tolower(player1[i]) == 'g')
        {
            sum1 += 2;
        }
        else if (tolower(player1[i]) == 'f' || tolower(player1[i]) == 'h' ||
                 tolower(player1[i]) == 'v' || tolower(player1[i]) == 'w')
        {
            sum1 += 4;
        }
        else if (tolower(player1[i]) == 'k')
        {
            sum1 += 5;
        }
        else if (tolower(player1[i]) == 'j' || tolower(player1[i]) == 'x')
        {
            sum1 += 8;
        }
        else if (tolower(player1[i]) == 'q' || tolower(player1[i]) == 'z')
        {
            sum1 += 10;
        }
        else
        {
            sum1 = sum1 + 0;
        }
    }
    int sum2 = 0;
    for (int i = 0, s = strlen(player2); i < s; i++)
    {
        // printf("%c\n", tolower(player1[i]));
        if (tolower(player2[i]) == 'a' || tolower(player2[i]) == 'e' ||
            tolower(player2[i]) == 'i' || tolower(player2[i]) == 'l' || tolower(player2[i]) == 'n')
        {
            sum2++;
        }
        else if (tolower(player2[i]) == 'o' || tolower(player2[i]) == 'r' ||
                 tolower(player2[i]) == 's' || tolower(player2[i]) == 't' ||
                 tolower(player2[i]) == 'u')
        {
            sum2++;
        }
        else if (tolower(player2[i]) == 'b' || tolower(player2[i]) == 'c' ||
                 tolower(player2[i]) == 'm' || tolower(player2[i]) == 'p')
        {
            sum2 += 3;
        }
        else if (tolower(player2[i]) == 'd' || tolower(player2[i]) == 'g')
        {
            sum2 += 2;
        }
        else if (tolower(player2[i]) == 'f' || tolower(player2[i]) == 'h' ||
                 tolower(player2[i]) == 'v' || tolower(player2[i]) == 'w')
        {
            sum2 += 4;
        }
        else if (tolower(player2[i]) == 'k')
        {
            sum2 += 5;
        }
        else if (tolower(player2[i]) == 'j' || tolower(player2[i]) == 'x')
        {
            sum2 += 8;
        }
        else if (tolower(player2[i]) == 'q' || tolower(player2[i]) == 'z')
        {
            sum2 += 10;
        }
        else
        {
            sum2 = sum2 + 0;
        }
    }

    if (sum1 > sum2)
    {
        printf("Player 1 wins!\n");
    }
    else if (sum1 == sum2)
    {
        printf("Tie!\n");
    }
    else
    {
        printf("Player 2 wins!\n");
    }
}
