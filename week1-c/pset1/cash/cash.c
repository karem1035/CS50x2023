#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // set change counter (n) = 0;

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 1);
    return cents;
}

int calculate_quarters(int cents)
{
    // TODO
    int quarters;
    if (cents >= 25)
    {
        quarters = cents / 25;
    }
    else
    {
        quarters = 0;
    }
    return quarters;
}

int calculate_dimes(int cents)
{
    // TODO
    int dimes;
    if (cents >= 10)
    {
        dimes = cents / 10;
    }
    else
    {
        dimes = 0;
    }
    return dimes;
}

int calculate_nickels(int cents)
{
    // TODO
    int nickels;
    if (cents >= 5)
    {
        nickels = cents / 5;
    }
    else
    {
        nickels = 0;
    }
    return nickels;
}

int calculate_pennies(int cents)
{
    // TODO
    int pennies;
    if (cents >= 1)
    {
        pennies = cents / 1;
    }
    else
    {
        pennies = 0;
    }
    return pennies;
}


// Posudo code
// pormpt for cenets "a postitive number"
// set change counter (n) = 0;

//quarters
// if cents >= 25 | quarters = cents / 25 | return quarters
// else quarter = 0
// n =+ quarters

// if cents >= 10 | dimes = cents / 10 | return dimes
// else dimes = 0
// n=+ dimes

// if cents >= 5 | nickels = cents / 5 | return nickels
// else nickles = 0
// n=+ nickles

// if cents >= 1 | pennies = cents / 1 | return pennies
// else pennies =  0
// n=+ pennies

