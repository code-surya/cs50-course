#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int n = get_int("Height: ");
    do
    {
        if (n>0 && n<=8)
        {

            for (int row = 0; row < n; row++)
            {

                for (int j = n-1; j > row; j--)
                {
                    printf(" ");
                }

                for (int i = -1; i < row; i++)
                {
                    printf("#");
                }

                printf("  ");


                for (int i = -1; i < row; i++)
                {
                    printf("#");
                }
                printf("\n");

            }
            break;
        }
        else
        {
            n = get_int("Height: ");
        }

    }
    while(true);
}




