#include <stdio.h>
#include <stdlib.h>

struct element {
int x;
struct element * next;
};
int* zadanie5(struct element* lista,a)
{
    struct element*wsk=lista;
    while(wsk->next!=NULL)
    {
        wsk=wsk->next;
        if(temp = wsk->x)
        {
            temp =*a;
        }
    }
    return temp;
}
