#include <cs50.h>
#include <stdio.h>


float calc_avr(int length, int array[]);

int main(void)
{
int n = get_int("How many numbers you have? ");
    // Defining the array
    int arr[n];

    // Storing array data
    printf("You entered %i numbers, please type them.\n" , n);

    for (int i = 0 ; i < n ; i++)
    {
        arr[i] = get_int("Number%i: " , i+1);
    }


    printf("Average: %f\n" , calc_avr(n , arr));

}

float calc_avr(int length, int array[])
{
    int sum = 0;
    for (int i = 0 ; i < length ; i++)
    {
        sum += array[i];
    }
    float average = sum / length;
    return average;
}



// average function takes length and array and return average
// void creates the array