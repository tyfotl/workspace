// Prints the minimum number of coins needed
// to return the change owed
// given enough of each type of coin
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get change owed
    int amt;
    do
    {
        amt = get_int("Change owed: ");
    }
    while (amt < 0);

    // Calculate
    // Quarters
    int q = amt / 25;
    amt %= 25;

    // Dimes
    int d = amt / 10;
    amt %= 10;

    // Nickels
    int n = amt / 5;
    amt %= 5;

    // Pennies
    int p = amt / 1;

    // Total number of coins
    int c = q + d + n + p;

    // Print Answer
    printf("%i\n", c);
}
