#include <stdio.h>
#include <cs50.h>
#include <string.h>


void print_bulb(int bit);
int main(void)
{
    string input = get_string("Text: ");
    for (int i = 0 ; i < strlen(input); i++)
    {
        int number = input[i];
        int binary[8];
        for (int y = 7 ; y >= 0 ; y--)
        {
            binary[y] = (int) number % 2;
            number /= 2;
        }
        for (int p = 0 ; p < 8 ; p ++)
        {
            print_bulb(binary[p]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
// get the string
// covert the string to DEC and print every number on a line
