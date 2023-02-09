#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("Please enter your name: ");
    for (int i = 0 ; i < strlen(name) ; i++)
    {
        switch(name[i])
        {
            case 'a':
            name[i] = (char) '1';
            break;

            default:
            name[i] = (char) '0';
            break;
        }
    }
    printf("%s\n", name);
}
