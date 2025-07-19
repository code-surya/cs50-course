
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_words(string f);
int count_sentences(string f);
int count_letter(string f);

int main(void)
{
    string text = get_string("Enter your text: ");
    float lenght = count_letter(text);
    float words = count_words(text);
    float sentence = count_sentences(text);
    float l = (lenght / words) * 100;
    float s = (sentence / words) * 100;
    float m = (0.0588 * l) - (0.296 * s);
    float index = m - 15.8;
    // printf("%f %f %f %f\n", l,s,m,index);
    // printf("%f   %f   %f   %f\n",lenght , words, sentence, index);
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(index));
    }
}

int count_words(string f)
{
    int word = 0;
    for (int i = 0, s = strlen(f); i < s; i++)
    {
        if (isspace(f[i]))
        {
            word++;
        }
        else
        {
            word = word + 0;
        }
    }
    word++;
    return word;
}

int count_sentences(string f)
{
    int no_sen = 0;
    for (int i = 0, s = strlen(f); i < s; i++)
    {
        if (f[i] == '.' || f[i] == '!' || f[i] == '?')
        {
            no_sen++;
        }
        else
        {
            no_sen = no_sen + 0;
        }
    }
    return no_sen;
}

int count_letter(string f)
{
    int letter = 0;
    for (int i = 0, s = strlen(f); i < s; i++)
    {
        if (isalpha(f[i]))
        {
            letter++;
        }
    }
    return letter;
}
