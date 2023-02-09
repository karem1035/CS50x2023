// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string input);

int main(int argc, string argv[])
{
// check argc only one argument
    if (argc < 2)
    {
// if invalid argc return 0 + error message
        printf("Please enter a word!\n");
        return 1;
    }
    else
    {
        printf("%s\n", replace(argv[1]));
    }
}
// create replace function I/O Strings
string replace(string input)
{
    int l = strlen(input);
    string converted[l];

    for (int i = 0 ; i < l ; i++)
    {
// a >> 6, e >> 3, i >> 1, o >> 0
        switch (input[i])
        {
            case 'a':
                input[i] = (char) '6';
                break;
            case 'e':
                input[i] = (char) '3';
                break;
            case 'i':
                input[i] = (char) '1';
                break;
            case 'o':
                input[i] = (char) '0';
                break;
            default:
                input[i] = input[i];
                break;
        }

    }
    return input;
}



// pseudocode
// print converted word