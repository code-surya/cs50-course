
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float x = get_int("x: ");
    float y = get_int("y: ");

    printf("%f\n", x / y);
}
