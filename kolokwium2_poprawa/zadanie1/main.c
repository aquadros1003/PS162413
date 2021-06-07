#include <stdio.h>
#include <stdlib.h>
int zadanie1(int *tab1,int *tab2,int n)
{
    int suma1 = 0;
    int suma2 = 0;
    for(int i =0;i<n;i++)
    {
        if(tab1[i]%2==0)
            suma1 = suma1 + tab1[i];
    }
    for(int i =0;i<n;i++)
    {
        if(tab2[i]%2==0)
            suma2 = suma2 + tab2[i];
    }
    if (suma1 == suma2)
        return 1;
    return 0;
}
int main()
{
    int *tab1=malloc(3*sizeof(int));
    *tab1=3;
    *(tab1+1)=4;
    *(tab1+2)=4;
    int *tab2=malloc(3*sizeof(int));
    *tab2=4;
    *(tab2+1)=3;
    *(tab2+2)=4;
    int *tab1b=malloc(3*sizeof(int));
    *tab1b=2;
    *(tab1b+1)=6;
    *(tab1b+2)=3;
    int *tab2b=malloc(3*sizeof(int));
    *tab2b=4;
    *(tab2b+1)=6;
    *(tab2b+2)=4;
    printf("%d\n",zadanie1(tab1,tab2,3));
    printf("%d\n",zadanie1(tab1b,tab2b,3));
}
