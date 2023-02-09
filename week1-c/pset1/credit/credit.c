#include <cs50.h>
#include <stdio.h>

int main(void)
{
// prompt for a card number
    long number = get_long("Number: ");

    long output;
    int e;
    int sum_e = 0;
    int o;
    int sum_o = 0;
    int total = 0;
    long l = 10;

// loop1 : recording every even digit (e)
    for (long i = 100 ; i < number * 10 ; i = i * 100)
    {
        output = number % i;

        e = (output * 10) / i;
        if (e * 2 >= 10)
        {
            sum_e = sum_e + (e * 2 % 10) + 1;
        }
        else
        {
            sum_e = sum_e + (e * 2);
        }

        // printf("e : %i\n", e);
    }

// loop2 : recording every odd digit (o)
    for (long i = 10 ; i < number * 10 ; i = i * 100)
    {
        output = number % i;

        o = (output * 10) / i;
        sum_o = sum_o + o;
        // printf("o : %i\n", o);
    }
    total =  sum_e + sum_o;
    // printf("ex2 total : %i\n", sum_e);
    // printf("o total : %i\n", sum_o);
    printf("Total : %i\n", total);

    if (total % 10 == 0 && number > 999999999999)
    {
        do
        {
            l = l * 10;
        }
        while (l < number);
        int last_2_digits = number / (l / 100);
        // printf("Valid ,Last digit : %i\n", last_2_digits);
// 3 AMEX | 5  MASTERCARD | 4 VISA
        if (last_2_digits == 34 ||   last_2_digits == 37)
        {
            printf("AMEX\n");
        }
        else if (last_2_digits >= 51 &&  last_2_digits <= 55)
        {
            printf("MASTERCARD\n");
        }
        else if (last_2_digits >= 40 &&  last_2_digits < 50)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}


// if (e*2) > 10
// sum_e = sum_e + ( e*2 % 10) + 1
// else
// int sum_e = sum_e + (e * 2)

// loop3 : recording every odd digit (o)
// in sum_o = sum_o + 0


// if total % 10 == 0
// else prin INVALID

// do i = 10 | i = i * 10