#include <stdio.h>
#include <cs50.h>


int get_size(void);
void print_grid(int size);


int main(void)
{
  // Get size of grid
  int n = get_size();

  // Print grid of bricks
  print_grid(n);
}

int get_size(void) {
    int s;
    do
    {
      s = get_int("Inter the size of the grid: ");
    }
    while (s < 1);
    return s;
  }

void print_grid(int size) {
    for (int w = 0 ; w < size ; w++) {
      for (int h = 0; h < size ; h++ ) {
        printf("#");
      }
      printf("\n");
    }
  }