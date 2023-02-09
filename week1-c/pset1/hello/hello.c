#include <stdio.h>
#include <cs50.h>

int main(void)
{
// Asking for a string name
    string name = get_string("What is your name: ");
// greeting the name
    printf("hello, %s\n", name);
}