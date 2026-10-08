#include "funcs.h"

int main(void)
{
    // coins "?" blocks
    horizontall(get_n(), "?");
    printf("\n");
    verticall(get_n(), "[]");
    block(get_n(), get_n(), "[]");
}
