#include <stdio.h>
#include <stdlib.h>
int pierwiastek(unsigned int n)
{
	int wynik = 1;
	for (i = 0; i * i < n; i++)
	{
		wynik = i;
	}
	return wynik;
}