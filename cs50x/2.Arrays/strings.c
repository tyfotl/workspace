#include <cs50.h>
#include <stdio.h>
// #include "/srv/ws/funcs.h"

int main(void)
{
    string s = "HI!";
    string t = "BYE!";

    // printf("%c %c %c %c %c %c\n", s[0], s[1], s[2], s[3], s[4], s[5]);
    // printf("%i %i %i %i %i %i\n", s[0], s[1], s[2], s[3], s[4], s[5]);
    // printf(" %c %c %c %c %c %c %c %c\n", t[0], t[1], t[2], t[3], t[4], t[5], t[-1], t[-2]);
    // printf(" %i %i %i %i %i %i %i %i\n", t[0], t[1], t[2], t[3], t[4], t[5], t[-1], t[-2]);

    string words[2] = {s, t};

    printf("%s\n", words[0]);
    printf("%s\n", words[1]);
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%c\n", words[i][j]);
            printf("%i\n", words[i][j]);
        }
    }
}
