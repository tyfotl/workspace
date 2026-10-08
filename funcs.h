// either works
#include <stdio.h>
// extern int printf(const char *__restrict, ...);

// meow n times
void meow(int ntimes)
{
    for (int i = 0; i < ntimes; i++)
    {
        printf("meow\n");
    }
}

// either works here aswell
#include <cs50.h>
// int get_int(const char *format, ...) __attribute__((format(printf, 1, 2)));

int get_n(void)
{
    int n;
    do
    {
        n = get_int("Whats n? ");
    }
    while (n<0);
    return n;
}

void verticall(int number, string item)
{
    for (int i = 0; i < number; i++)
    {
        printf("%s\n",item);
    }
}

void horizontall(int number, string item)
{
    for (int i = 0; i < number; i++)
    {
        printf("%s",item);
    }
}

void block(int x, int y, string item)
{
    for (int i = 0; i < x; i++)
    {
        horizontall(y, item);
        printf("%s\n",item);
    }
}
