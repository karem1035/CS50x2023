#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int key[26];
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    else if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    for (int i = 0 ; i < 26 ; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Key must contain 26 characters.\n");
            return 1;
        }
        key[i] = tolower(argv[1][i]);
    }

    // checking if there is any dublicated keys
    for (int i = 0 ; i < 26 ; i++)
    {
        int count = 0;
        for (int j = 0 ; j < 26; j++)
        {
            if (key[i] == key[j])
            {
                count++;
            }
            if (count > 1)
            {
                printf("Error Dublicated\n");
                return 1;
            }
        }
    }


//////////////////////////////////////////

    string text = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0 ; i < strlen(text) ; i ++)
    {
        if (isupper(text[i]))
        {
            int r = text[i] % 65;
            printf("%c", key[r] - 32);
        }
        else if (islower(text[i]))
        {
            int r = text[i] % 97;
            printf("%c", key[r]);
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}
