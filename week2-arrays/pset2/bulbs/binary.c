// personal try
#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void)
{
const int BITS_IN_BYTE = 8;
int binary[8];
int rem = 0;
int number = get_int("Please enter a nubmer: ");
    for (int i = 7 ; i >= 0 ; i -- )
    {
        binary[i] = number%2;
        number /= 2;
    }

    for (int j = 0 ; j < 8 ; j ++ )
    {
        printf("%i" ,(int) binary[j]);
    }
        printf("\n");
}


// number