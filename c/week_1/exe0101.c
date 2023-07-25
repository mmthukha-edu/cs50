#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What's your name'? ");
    int age = get_int("How old are you? ");
    string phone = get_string("What's your phone number? ");

    printf("Your name is %s.\nYour age is %i.\nYour phone number is %s.\n", name, age, phone);
}