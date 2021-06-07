#include <stdio.h>
#include <stdlib.h>


typedef struct Biegacz
{
    char*imie;
    int rekord;
};
  struct Biegacz tab[5] =
    {
        { "A", 1},
        { "B", 2},
        { "C", 3},
        { "D", 4},
        { "E", 5},

    };

int main()
{
   for(int i = 0;i<5;i++)
   {
       printf("%s  %d\n",tab[i].imie, tab[i].rekord);
   }
return 0;
}
