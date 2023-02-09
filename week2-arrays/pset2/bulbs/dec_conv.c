// personal try
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string input = get_string("Please enter a string: ");
    int l = strlen(input);
    int input_dec[l];

    printf("Input: %s\n",input);
    printf("Length: %i\n",l);

    for (int i = 0 ; i < l ; i++ )
    {
        input_dec[i] = (int) input[i];
        printf("%d ", input_dec[i]);
    }
    printf("\n");
}