#include <stdio.h>
#include <stdlib.h>
int main()
{
	unsigned int n, m;
	int wynik = 0;
	scanf("%d\n%d", &n, &m);
	for (int i = 0; wynik < m; i++)
	{
		wynik = wynik + n;
		printf("%d\n", wynik);
	}
	return 0;
}
