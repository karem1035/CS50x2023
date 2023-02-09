#include <stdio.h>
#include <cs50.h>

bool valid_triangle(float s1,float s2,float s3);

int main(void)
{
    float side[3];

// prompt user for the sides a b c positive numbers only
    for (int i = 0 ; i < 3 ; i ++)
    {
      do
      {
        side[i] = get_float("Enter side %i lenth: " , i + 1);
      }
      while (side[i] <= 0);
    }
    if (valid_triangle(side[0], side[1], side[2]))
    {
      printf("true\n");
    }
    else
    {
      printf("false\n");
    }
}


bool valid_triangle(float s1,float s2,float s3)
{
    if ( s1 >= (s2 + s3) || s2 >= (s1 + s3) || s3 >= (s1 + s2) )
    {
    return false;
    }
    else
    return true;
}

// Pseudocode
// if a > b + c || b > a + c || c > a + v (flase)
// else true