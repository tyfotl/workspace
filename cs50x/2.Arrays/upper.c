#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    const int len = strlen(s);
    char sUpper[len + 1];

    // manual
    for (int i = 0; i < len; i++)
    {
        // If s[i] is lowercase
        if (s[i] >= 'a' && s[i] <='z')
        {
            sUpper[i] = s[i] - 32;
        }
        else
        {
            sUpper[i] = s[i];
        }
    }
    sUpper[len] = '\0';

    printf("After:  %s\n", sUpper);

    
    // func
    for (int i = 0; i < strlen(s); i++)
    {
        sUpper[i] = toupper(s[i]);
    }
    
    printf("After:  %s\n", sUpper);
}
