
#include <cs50.h>
#include <stdio.h>
#include <string.h>
int str_length(string s);
int main(void)
{
    string name = get_string("Enter your name:");
    int length = strlen(name);
    printf("%i\n", length);
}


// int str_length(string s)
// {
//     int n =0;
//     while (s[n] != '\0')
//     {
//         n++;

//     }
//     return n;
// }
