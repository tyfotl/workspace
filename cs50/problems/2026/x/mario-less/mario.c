// Prints the end staircase in mario to desired height
#include <cs50.h>
#include <stdio.h>

void row(int height, int bricks);

int main(void)
{
    // Get meaningful height of staircase
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0);

    // Print each row one by one till height
    for (int i = 1; i <= height; i++)
    {
        row(height, i);
    }
}

// Print the row given the row number
void row(int height, int bricks)
{
    int j = 1;
    while (j <= height - bricks)
    {
        printf(" ");
        j++;
    }

    while (j <= height)
    {
        printf("#");
        j++;
    }
    printf("\n");
}
