#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("How many times to meow? ");
    while (n < 0)
    {
        n = get_int("How many times to meow? ");
    }
    for (int i=0; i<n; i++)
    {
        printf("meow\n");
    }
}
