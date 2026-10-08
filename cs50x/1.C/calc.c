#include <cs50.h>

int main(void)
{
    long x = 1;
    while (true)
    {
        char c = get_char("Here's $%li. Double it and give it to the next person? ", x);
        if (c == 'y' || c == 'Y')
        {
            x *= 2;
        }
        else
        {
            break;
        }
    }
}
