#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int cents;

    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    int coins = 0;

    // Calculate how many quarters (25c)
    while (cents >= 25)
    {
        cents = cents - 25;
        coins++;
    }

    // Calculate how many dimes (10c)
    while (cents >= 10)
    {
        cents = cents - 10;
        coins++;
    }

    // Calculate how many nickels (5c)
    while (cents >= 5)
    {
        cents = cents - 5;
        coins++;
    }

    // Calculate how many pennies (1c)
    while (cents >= 1)
    {
        cents = cents - 1;
        coins++;
    }

    // total number of coins
    printf("%i\n", coins);
}
