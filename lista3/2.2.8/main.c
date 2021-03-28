#include <stdio.h>
#include <stdlib.h>

int pierwiastek(unsigned int n)
{
	int wynik = 1;
	for (int i = 0; i * i <= n; i++)
	{
		wynik = i;
	}
	return wynik;
}
int main()
{
    int n;
	scanf("%d", &n);
	printf("%d\n", pierwiastek(n));
	return 0;
}
