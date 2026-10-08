#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // int h = get_int("Height: ");
    // print_vert_n(h);
    short int score1 = 73;
    short int score2 = 72;
    short int score3 = 33;
    // better precision: 59.333333
    printf("Avg: %f\n", (score1 + score2 + score3) / 3.0);
    // worse precision: 59.333332
    // printf("Avg: %f\n", (score1 + score2 + score3) / (float) 3);

}
