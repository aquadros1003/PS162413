#include <stdio.h>
#include <stdlib.h>

void foo(int const* a, int* b)
{
    *b = *a;
}
