#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>



int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

// index = 0.0588 * L - 0.296 * S - 15.8
int main(void)
{
// L is the average number of letters per 100 words
// S is the average number of sentences per 100 words

    string s = get_string("Text: ");
    float L = (float) count_letters(s) / (float) count_words(s) * 100.0;
    // printf("L: %f\n" , L);

    float S = (float) count_sentences(s) / (float) count_words(s) * 100.0;
    // printf("S: %f\n" , S);

    float index = 0.0588 * L - 0.296 * S - 15.8;

    if (index > 16)
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


    // printf("Lettrs: %d\n", count_letters(s));
    // printf("Words: %d\n", count_words(s));
    // printf("Sentences: %d\n", count_sentences(s));
}

int count_letters(string text)
{
    int letters = 0;

    for (int i = 0 ; i < strlen(text) ; i++)
    {
        if (isalnum(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

int count_words(string text)
{
    int words = 0;
    for (int i = 0 ; i < strlen(text) ; i++)
    {
        if (isspace(text[i]))
        {
            words++;
        }
    }
    return words + 1;
}


int count_sentences(string text)
{
    int sentences = 0;
    for (int i = 0 ; i < strlen(text) ; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences ++;
        }
    }
    return sentences;
}
//   for (int i = 0 ; i < strlen(s) ; i++)
//     {
// // calculate sentences . | ! | ? |
//
// // calculate words (Spaces)
//         else if (s[i] == ' ')
//         {
//           words ++;
//         }
// // calculate letters A:Z a:z
//         else if (isalnum(s[i]))
//         {
//           letters++;
//         }
//     }

// prompt for a string
// loop i = 0 > string length
// calculate sentences . | ! | ? |
// calculate words (Spaces)
// calculate letters A:Z a:z
// calculate grade
// print grade ( Before Grade 1 > 16+ )