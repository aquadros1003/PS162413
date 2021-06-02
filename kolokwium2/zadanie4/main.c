#include <stdio.h>
#include <stdlib.h>

struct Samolot {
    char *model;
    int liczbasilnikow;
    int liczbapasazerow;
    };
int zadanie4(struct struktura* tab, int n)
{
    int ilosc_pasazerow = 0;
    for(int i=0;i<n;i++)
    {
        ilosc_pasazerow = ilosc_pasazerow + struktura[i].iloscpasazerow;
    }
    return ilosc_pasazerow;
}

int main()
{
    struct Samolot tab[3];
   tab[0].model = "ddsds";
   tab[0].liczbasilnikow = 3;
   tab[0].liczbapasazerow = 5;
   tab[1].model = "ddsd";
   tab[1].liczbasilnikow = 3;
   tab[1].liczbapasazerow = 5;
   tab[2].model = "dds";
   tab[2].liczbasilnikow = 3;
   tab[2].liczbapasazerow = 5;
   printf("%d\n",zadanie4(tab, 3));
}
