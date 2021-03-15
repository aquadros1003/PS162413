#include <stdio.h>
#include <stdlib.h>

int silnia(int podstawa)
{
	int i;
	int silnia = 1;
	for (i = 2; i <= podstawa; i++)
		silnia = silnia * i;
	return silnia;
}
int main()
{
	int liczba;
	scanf("%d", &liczba);
	printf(silnia(liczba));
	return 0;
}
