#include <stdio.h>
#include <stdlib.h>

int mniejsza(int*a, int*b)
{
    if (*a<*b)
    {
        return *a;
    }
    return *b;
}
