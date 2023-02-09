#include <cs50.h>
#include <stdio.h>

int main(void)
{
  long i = 1;
  long number = get_int("number: ");

  do
  {
    i = i * 10;
  }
  while ( i < number);
  printf("%li\n", number /(i / 100));
}