#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c = get_char("Do you agree? y for Yes or n for No ");
    if (c == 'y' || c == 'Y')
    {
        printf("You agreed\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("You did not agree\n");
    }
}