#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //request initial number of llamas
    int i;
    do
    {
        i = get_int("The initial number of llamas: ");
    }
    while (i < 9);

    //request final number of llamas
    int f;
    do
    {
        f = get_int("The final number of llamas: ");
    }
    while (f < i);

    //loops to find out the number of years
    int y = 0;
    while (i < f)
    {
        i += i * 1/12;
        y++;
    }

    //give the results
    printf("The number of years taken = %i\n", y);
}