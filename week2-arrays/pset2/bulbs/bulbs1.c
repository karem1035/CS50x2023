// Personal try
#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
// create an array for decicmal | binary
    long dec_arr[8];


// prompt user for a text
    string text = get_string("Message: ");


    int l = strlen(text);
// loop for storing decimal values
    for (int i = 0 ; i < l ; i++ )
    {
        dec_arr[i] = (long) text[i];
        // printf("%d ", dec_arr[i]);
    }

// loop for storing binary values
    for (int x = 0 ; x < l  ; x++)
    {
        long binary[8];

        int number = dec_arr[x];
        for (int i = 7 ; i >= 0 ; i -- )
        {
             binary[i] = number%2;
             number /= 2;
        }

        for (int b = 0 ; b < 8 ; b++)
        {
            print_bulb(binary[b]);
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

// store the text dec values to the array

