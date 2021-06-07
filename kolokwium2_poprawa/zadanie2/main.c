#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int zadanie2(int n)
{
    int suma = 0;
    for (int i = 0;i<n;i++)
    {
        suma = suma + pow(i,3);
    }
    return suma;
}
int main()
{
    printf("%d\n",zadanie2(3));
    printf("%d\n",zadanie2(1));
    printf("%d\n",zadanie2(5));
    return 0;
}
