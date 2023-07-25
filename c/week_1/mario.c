#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //get the number of question marks
    int i;
    do
    {
        i = get_int("What is the mumber of question marks? ");
    }
    while (i < 1);

    //a row of question marks
    for (int q = 0; q < i; q++)
    {
        printf("?");
    }
    printf("\n");

    //get the size of grid
    int n;
    do
    {
        n = get_int("What the size of the grid? ");
    }
    while (n < 1);

    //a grid of bricks
    for (int b = 0; b < n; b++)
    {
        for (int c = 0; c < n; c++)
        {
            printf("#");
        }
        printf("\n");
    }

}