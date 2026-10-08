#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Invalid Command Line Argument. \n");
        return 1;
    }
    printf("Hello, %s\n", argv[1]);
    return 0;
}
