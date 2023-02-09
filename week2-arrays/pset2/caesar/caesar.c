#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, string argv[])
{

    // Validating the key
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0 ; i < strlen(argv[1]) ; i++)
    {

        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }


// Key to %26
    int key = atoi(argv[1]);
    if (key > 26)
    {
        key = key % 26;
    }

// promting for a text
    string text = get_string("plaintext: ");

// Printing the result
    printf("ciphertext: ");
    for (int i = 0 ; i < strlen(text) ; i++)
    {
        // Uppercase
        if (isupper(text[i]))
        {
            // int k to get the order of the number after the key in range of 26
            int k = (text[i] + key - 64) % 26;
            printf("%c", k + 64);
        }
        else if (islower(text[i]))
        {
            // int k to get the order of the number after the key in range of 26
            int k = (text[i] + key - 96) % 26;
            printf("%c", k + 96);
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}
