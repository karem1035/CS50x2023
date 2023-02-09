// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    float taxamount = bill * (tax / 100.0);
        // printf("taxamount %f\n" , taxamount);
    float billamount = bill + taxamount;
    // printf("billamount %f\n" , billamount);
    float tipamount = billamount * (tip / 100.0);
    // printf("tipamount %f\n" , tipamount);
    float split = (billamount + tipamount) / 2;
//   printf("split %f\n" , split);
return split;
}
