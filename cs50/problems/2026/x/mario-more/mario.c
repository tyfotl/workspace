// Prints the adjacent pyramids in mario upto desired height
#include <cs50.h>
#include <stdio.h>

// Initializes functions
void spaces(int height, int row_no);
void bricks(int row_no);

int main(void)
{
    // Get meaningful height of structure
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Print each row
    for (int i = 1; i <= height; i++)
    {
        spaces(height, i);
        bricks(i);
        printf("  ");
        bricks(i);
        printf("\n");
    }
}

// Used design from mario/less.
// Prints the expected number of spaces given desired heiht and row number
void spaces(int height, int row_no)
{
    int j = 1;
    while (j <= height - row_no)
    {
        printf(" ");
        j++;
    }
}

// Since the functions are separated the value of j resets.
// So changed from j <= height to j <= row_no
void bricks(int row_no)
{
    int j = 1;
    while (j <= row_no)
    {
        printf("#");
        j++;
    }
}
