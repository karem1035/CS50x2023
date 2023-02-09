#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;
    do
    {
        start_size = get_int("Start size : ");
    }
    while (start_size < 9);
    // TODO: Prompt for end size
    int end_size;
    do
    {
        end_size = get_int("End size : ");
    }
    while (start_size > end_size);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;

    if (start_size == end_size)
    {
        printf("Years: %i\n", years);
    }
    else
    {
        int current_size = start_size;
        do
        {
            int born = current_size / 3;
            int pass = current_size / 4;
            current_size = current_size + born - pass;
            years++;
        }
        while (current_size < end_size);
        printf("Years: %i\n", years);
        // TODO: Print number of years
    }
}


// take end_size ( >= start_size)
// int years = 0
// do int current_size = start_size + (start_size / 3) - (start_size / 4) | years ++
// while start_size < end_size
// printf years;
