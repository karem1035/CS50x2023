#include <cs50.h>
#include <stdio.h>

int main(void)
{
// Prompting for height(h) 1 : 8
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    for (int i = h ; i > 0 ; i--)
    {
        for (int y = 0 ; y < h ; y++)
        {
            if (y >= i - 1)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// loop1 i = 0 < h
// loop2 y = 0 < h
// if