#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    string operation;
    /*do
    {
        operation = get_string("What is the operation? + or - or * or / ");
    }
    while (operation =! + || operation =! - || operation =! * || operation =! /);
    printf("%i\n", x operation y);*/
    printf("%i\n", x / y);
}