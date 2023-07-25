#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (max < min);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    // removing 1 from the results
    if (number < 2)
    {
        return false;
    }

    // choosing numbers by dividing with number starting from 2 and ending with 1 less than itself
    for (int d = 2; d <= number - 1; d++)
    {
        if (number % d == 0)
        {
            return false;
        }
    }
    return true;
}
