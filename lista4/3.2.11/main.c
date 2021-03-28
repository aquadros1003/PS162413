#include <stdio.h>
#include <stdlib.h>

void* foo(int n)
{
    return malloc(n*sizeof(int));
}
