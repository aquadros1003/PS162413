#include <stdio.h>
#include <stdlib.h>
int main()
{
	unsigned int n, m, k;
	int wynik = 0;
	scanf("%d\n%d\n%d", &n, &m, &k);
	for (int i = m; wynik < k; i++)
	{
		wynik = wynik + n;
		printf("%d\n", wynik);
	}
	return 0;
}

