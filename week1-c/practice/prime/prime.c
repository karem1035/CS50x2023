#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
// STEP 2: Initialize a variable temp to 0.
if (number == 4)
{
    return false;
}
int temp = 0;

// STEP 3: Iterate a “for” loop from 2 to num/2.
for (int i = 2 ; i < number / 2 ; i++)
  {
// STEP 4: If num is divisible by loop iterator, then increment temp.
    if (number % i == 0)
    {
        temp++;
    }
  }
// STEP 5: If the temp is equal to 0,
    if (temp == 0)
    {
        // printf("%i is a prime number\n", number);
        return  true;
    }
    else
    {
        // printf("%i is not a prime number\n", num);
        return  false;
    }
}
