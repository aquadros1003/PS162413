#include <stdio.h>
#include <stdlib.h>

int potega(int a,unsigned int b)
{
	int wynik = 1;
	for (int i = 1; i <= b; i++)
	{
		wynik *= a;
	}
	return wynik;
}

int pierwiastek(int podstawa, unsigned int stopien)
{
	int wynik = 0;
	for (int i = 0; potega(i, stopien) <= podstawa; i++)
	{
		wynik = i;
	}
	return wynik;
}
int ZliczSume(int n, unsigned int m)
{
	int wynik = 0;
	for (int i = 0; i <= n; i++)
	{
		wynik = wynik + pierwiastek(n, m);
	}
	return wynik;
}

