#include <stdio.h>
#include <stdlib.h>

int foo(int* a, int* b)
{
    return *a + *b;
}

int main()
{
    int tab[] = { -2,2,-3,0,4,4,1 };
    int* wsk = tab + 1;
    int b = *(wsk += 4); //b= 4
    int c = b + 2; // b= 4 , c= 6
    int d = foo(&b, &c); // b= 4 , c= 6 , d= 10
    int e = (wsk += -1)[3]; // b= 4 , c= 6 , d= 10 , e= 0
    e = (d -= 2) + (c += 2); // b= 4 , c= 8 , d= 8 , e= 16
    c = d - (b += 3); // b= 7 , c= 1 , d= 8 , e= 16
    b = *wsk + e; // b= 20 , c= 1 , d= 8 , e= 16
    b = (--c) - (d++);  // b= -8 , c= 0 , d= 9 , e= 16
    return 0;
}
