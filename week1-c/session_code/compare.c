#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int x = get_int("what is x? ");
  int y = get_int("what is y? ");

  if (x > y)
  {
    printf("x : %i is bigger than y : %i\n", x , y);
  }
  else if (y > x)
  {
   printf("y : %i is bigger than x : %i\n", y , x);
  }
  else
  {

    printf("x is equal to y = %i\n", x);
  }
}
