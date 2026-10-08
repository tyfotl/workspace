#include <cs50.h>
#include <stdio.h>

void print_vert_n(int n);

int main(void)
{
    int h = get_int("Height: ");
    print_vert_n(h);
}

void print_vert_n(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#\n");
    }
}
