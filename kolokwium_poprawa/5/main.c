#include <stdio.h>
#include <stdlib.h>
int kolokwium5(int n, int tab[])
{
	int tab[] = tab[n];
	for (int i = 0; i < n; i++)
	{
		if (tab[i]%2 == 1)
		{
			if (tab[i + 1] > tab[i])
				return tab[i];
		}
		else
		{
			return 0;
		}
	}
}
int main()
{
	int n1 = 3;
	int tab1[] = { 3, 5, 5 };
	int n2 = 4;
	int tab2[] = { 4, 4, 3 };
	printf("%d\n", kolokwium5(n1, tab1));
	printf("%d\n", kolokwium5(n2, tab2));
}