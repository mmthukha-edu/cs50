#include <stdio.h>
#include <cs50.h>

int get_qmark(void);
void print_qmark(int i);
int get_brick(void);
void print_brick(int j);

int main(void)
{
    int i = get_qmark();
    print_qmark(i);
    int j = get_brick();
    print_brick(j);
}

int get_qmark(void)
{
    int i;
    do
    {
        i = get_int("What is the number of question marks? ");
    }
    while (i < 1);
    return i;
}

void print_qmark(int i)
{
    for (int q = 0; q < i; q++)
    {
        printf("?");
    }
    printf("\n");
}

int get_brick(void)
{
    int j;
    do
    {
        j = get_int("What is the lenght and width of brick grid? ");
    }
    while (j < 1);
    return j;
}

void print_brick(int j)
{
    for (int b = 0; b < j; b++)
    {
        for (int c = 0; c < j; c++)
        {
            printf("#");
        }
        printf("\n");
    }
}