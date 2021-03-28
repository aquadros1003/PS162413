#include <stdio.h>
#include <stdlib.h>

int foo(const int *a, const int *b)
{
    int a_przed_zmiana = *a;
    *a = *b;
    *b = a_przed_zmiana;
}
