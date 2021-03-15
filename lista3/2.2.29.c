#include <stdio.h>
#include <stdlib.h>
int euklides(int n,int m)
{
    if (m != 0)
        return euklides(m, n % m);

    return n;
}