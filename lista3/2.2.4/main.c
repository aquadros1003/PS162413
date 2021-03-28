#include <stdio.h>
#include <stdlib.h>

int potega (int n)
{
    int wynik = 2;
    for (int i = 2; i <= n ; i++)
    {
        wynik*=2;
    }
    return wynik;
}
int main()
{
    int n;
	scanf("%d", &n);
	printf("%d\n", potega(n));
	return 0;
}

