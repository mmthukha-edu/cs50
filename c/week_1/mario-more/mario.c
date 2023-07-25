#include <cs50.h>
#include <stdio.h>

int get_brick(void);
void print_brick(int n);

int main(void)
{
    // ask the user for the height of bricks
    int b = get_brick();
    // print the bricks
    print_brick(b);
}

int get_brick(void)
{
    int b;
    do
    {
        b = get_int("Height: ");
    }
    while (b < 1 || b > 8);
    return b;
}

void print_brick(int n)
{
    int x = n + 1;
    while (n > 0)
    {
        // print the first set of spaces
        for (int i = n - 1; i > 0; i--)
        {
            printf(" ");
        }

        // print the first set of bricks
        for (int i = 0; i < x - n; i++)
        {
            printf("#");
        }

        // print the space between bricks
        for (int i = 0; i < 2; i++)
        {
            printf(" ");
        }

        // print the second set of bricks
        for (int i = 0; i < x - n; i++)
        {
            printf("#");
        }

        // print the second set of spaces (unnecessary?)
        /*
        for (int i = n -1; i > 0; i--)
        {
            printf(" ");
        }
        */

        printf("\n");
        n--;
    }
}