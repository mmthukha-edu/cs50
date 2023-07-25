#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask the user for his credit card number
    long credit = get_long("Number: ");

    // getting the sum of 2x product digits of every other digit starting from the number's second to last digit
    int x = 0;
    int sld;
    for (long n = 10; n <= credit; n = n * 100)
    {
        sld = ((credit / n) % 10) * 2;
        for (int m = 1; m <= sld; m = m * 10)
        {
            x = x + ((sld / m) % 10);
        }
    }

    // getting the sum of the other digits
    int y = 0;
    for (long o = 1; o <= credit; o = o * 100)
    {
        y = y + ((credit / o) % 10);
    }

    // getting the last digit of the sum of two values
    int z = (x + y) % 10;

    // checking if the number is valid
    if (z == 0)
    {
        if (credit > 339999999999999 && credit < 350000000000000)
        {
            printf("AMEX\n");
        }
        else if (credit > 369999999999999 && credit < 380000000000000)
        {
            printf("AMEX\n");
        }
        else if (credit > 5099999999999999 && credit < 5600000000000000)
        {
            printf("MASTERCARD\n");
        }
        else if (credit > 3999999999999 && credit < 5000000000000)
        {
            printf("VISA\n");
        }
        else if (credit > 3999999999999999 && credit < 5000000000000000)
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

    // printf("%i,%i,%i\n", x, y, z);
}