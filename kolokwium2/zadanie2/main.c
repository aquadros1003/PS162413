#include <stdio.h>
#include <stdlib.h>

int dlugosc(char*napis)
{
    int i=0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}

int foo(char*n1, char*n2)
{
    int ilosc_spacji=0;
    if(dlugosc(n1) < dlugosc(n2))
        for(int i = 0; i < dlugosc(n1);i++)
        {
            if(n1[i]=" ")
                ilosc_spacji=ilosc_spacji+1;
        }
        return ilosc_spacji;
    if(dlugosc(n1) > dlugosc(n2))
        for(int i = 0; i < dlugosc(n2);i++)
        {
            if(n2[i]=" ")
                ilosc_spacji=ilosc_spacji+1;
        }
        return ilosc_spacji;
    if(dlugosc(n1) == dlugosc(n2))
        for(int i = 0; i < dlugosc(n1);i++)
        {
        if(n1[i]=" ")
                ilosc_spacji=ilosc_spacji+1;
        }
        return ilosc_spacji;
}

int main()
{
    char napis1[20]="abcde23";
    char napis2[20]="tERddsdsTS";
    printf("%d\n",dlugosc(napis1));
    printf("%d\n",dlugosc(napis2));
    printf("%d\n",foo(napis1,napis2));
    return 0;
}
