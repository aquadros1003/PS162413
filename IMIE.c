#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[20] = "£UKASZ"; //tu trzeba wpisac swoje imie, wszystkie litery duze
    char z = *(napis + 2); //z="K"
    int a = napis[3]; // a=65   ,z=75 "K"
    z++; // a= 65  ,z=76 "L"
    ++a; // a=66   ,z=76 "L"
    z = (a -= 2) + 3; // a=64   ,z=67 "C"
    a = a ^ 4; // a= 68  ,z=67 "C"
    return 0;
}
