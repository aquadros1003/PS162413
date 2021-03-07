#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m, n;
	scanf("%d\n%d", &m, &n);
	int wynik = 1;
	for (int i = n; i <= m; i++)
	{
		wynik = wynik * i;
	}
	printf("%d", wynik);


}
