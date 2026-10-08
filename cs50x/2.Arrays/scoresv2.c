#include <cs50.h>
#include <stdio.h>

double avg(int len, int nums[]);

int main(void)
{
    const int N = 3;
    int scores[N];

    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Avg: %f\n", avg(N, scores));
}

double avg(int len, int nums[])
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += nums[i];
    }
    return sum / (double) len;
}
