#include <stdio.h>
#include <stdlib.h>
int kolokwium1(int n)
{
	int suma = 0;
		for (int i = 0; i < n; i++)
		{
			if (i % 5 == 0 && i % 7 == 0)
			{
				suma = suma + i;
			}
		}
		return suma;
}
int main()
{
	int n = 777;
	printf("%d\n", kolokwium1(n));
}
