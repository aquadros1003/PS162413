#include <stdio.h>
#include <stdlib.h>

int kolokwium2(int n)
{
	int suma = 0;
	for (int i = 0; i<n; i++)
	{
		if (i % 5 == 0 || i % 8 == 0)
			suma = suma + i;
	}
	return suma;
}
int main()
{
	int n1 = 77;
	int n2 = 10;
	printf("%d\n", kolokwium2(n1));
	printf("%d\n", kolokwium2(n2));
	return 0;
}
