#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int age = get_int("How old are you? ");
    if (age < 18)
    {
        printf("You are underaged\n");
    }
    else if (age > 18)
    {
        printf("You are too old\n");
    }
    else
    {
        printf("You are just the right age\n");
    }
}