#include <cs50.h>
#include <stdio.h>
int main(void)
{
    char c = get_char("Do you agree to our Terms and Conditions? ");
    if (c == 'y' || c == 'Y')
    {
        printf("TnC agreed. Continuing...\n");
    }
    else
    {
        printf("Exiting...\n");
    }
}
