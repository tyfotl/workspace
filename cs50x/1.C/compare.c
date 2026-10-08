#include <stdio.h>
#include <cs50.h>
int main(void)
{
float x = get_float("Whats x? ");
float y = get_float("Whats y? ");
if (x > y)
{
    printf("%g is greater than %g \n",x,y);
}
else if (x < y)
{
    printf("%g is less than %g \n",x,y);
}
else
{
    printf("%g is equal to %g \n",x,y);
}

}
