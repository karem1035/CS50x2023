// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    bool upper = false;
    bool lower = false;
    bool number = false;
    bool symbol = false;

// for i = 0 < password length
    for (int i = 0 ; i < strlen(password); i++)
    {

// if password[i] upper > true "isupper"
        if (isupper(password[i]))
        {
            upper = true;
        }

// if password[i] lower > true "islower"
        else if (islower(password[i]))
        {
            lower = true;
        }

// if password[i] number> true "isdigit"
        else if (isdigit(password[i]))
        {
            number = true;
        }

// if password[i] symbol> true "ispunct"
        else if (ispunct(password[i]))
        {
            symbol = true;
        }
    }

    if (upper && lower && number && symbol)
    {
        return true;
    }
    else
    {
        return false;
    }
}


// if (upper lower number symbol)
// return true
// else return false