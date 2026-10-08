#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include "/srv/ws/funcs.h"

int main(void)
{
    string name = get_string("Name: ");

    int n = 0;
    while (name[n] != '\0') {n++;}
    printf("%i\n", n);

    // Now we can use string headers/libs:
    // n = strlen(name);
    // printf("%i\n", n);
    // 
    // OR
    printf("%li\n", strlen(name));

    
}
