#include <cs50.h>
#include <stdio.h>

int main(void)
{
// Ask for the height (h) 1 : 8
    int h;
    do
    {
        h = get_int("Height : ");
    }
    while (h < 1 || h > 8);

// loop1 i > h "Height Loop"
    for (int i = h ; i > 0 ; i--)
    {
// loop2 y : print the left side
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
// print the gap
        printf("  ");
// loop3 x : print the right side
        for (int y = h;  y > 0 ; y--)
        {
            if (y >= i)
            {
                printf("#");
            }
        }
// new line
        printf("\n");
    }
}
