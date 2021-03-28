#include <stdio.h>
#include <stdlib.h>

int foo(int (*wsk1)(int a),int (wsk2)(int b), unsigned int n)
{
    for(int i = 0; i <= n; i++)
    {
        if(wsk1(i)) != wsk2(i))
        {
        return 0;
        }
    }
    return 1;
}
