#include <stdio.h>
#include <stdlib.h>

int potega (int a, int b)
{
    int wynik_potega = 0;
    for (int i = 1; i <= b; i++)
    {
        wynik_potega *= a;
    }
    return wynik_potega;
}

int pierwiastek(int x,  int y)
{
	int wynik_pierwiastek = 0;
	for (int i = 0; potega (i, y) <= x; i++)
	{
		wynik_pierwiastek = i;
	}
	return wynik_pierwiastek;
}

int ZliczSume(int n, int m)
{
	int wynik_suma = 0;
	for (int i = 0; i <= n; i++)
	{
		wynik_suma += pierwiastek(n, m);
	}
	return wynik_suma;
}

int main()
{
    int n;
    int m;
    scanf("%d\n", &n);
    scanf("%d", &m);
    printf("%d",ZliczSume(n, m));
    return 0;
}
