#include <stdio.h>
#include <stdlib.h>

int foo(int* a, int* b)
{
    return *a - *b;
}

int main()
{
    int tab[] = { 61,6,1,6,1,6,1,61 };
    int* wsk = tab - 1;
    int b = *(wsk += 4); //b=6
    int c = b * b; // b=6  , c=36
    int d = foo(&b, &c); // b= 6 , c=36  , d=-30
    int e = (wsk += -1)[3]; // b= 6 , c= 36 , d=-30  , e=6
    e = (d -= 2) + (c += 2); // b= 6 , c= 38 , d= -32 , e= 6
    c = d + (b += 4); // b= 10 , c= -22 , d= -32 , e=6
    b = *wsk + e; // b= 7 , c=-22  , d=-32  , e=6
    b = (--c) - (d++);  // b= 9 , c= -23 , d= -31 , e=6
    return 0;
}
