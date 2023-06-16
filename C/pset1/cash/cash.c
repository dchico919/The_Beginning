#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{

    float change;
    do
    {
        change = get_float("How much change is owed: ");
    }
    while (change < 0);

    int convertCents = round(change * 100);
    int coins = 0;

    while (convertCents >= 25)
    {
        convertCents = convertCents - 25;
        coins++;
    }
    while (convertCents >= 10)
    {
        convertCents = convertCents - 10;
        coins++;
    }
    while (convertCents >= 5)
    {
        convertCents = convertCents - 5;
        coins++;
    }
    while (convertCents >= 1 && convertCents > 0)
    {
        convertCents = convertCents - 1;
        coins++;
    }

    printf("%d\n", coins);

}