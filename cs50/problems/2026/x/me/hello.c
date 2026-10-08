// Says hello to the user.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Asks for the user's name.
    string name = get_string("What's your name? ");
    // Prints hello followed by user's name.
    printf("hello, %s\n", name);
}
