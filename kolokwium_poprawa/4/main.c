#include <stdio.h>
#include <stdlib.h>
int kolokwium4(int n)
{
	int temp;
	if (n == 0)
		return 2;
	if (n == 1)
		return 2;
	if (n % 2 == 0)
	{
		temp = kolokwium4(n) + n - 1;
		return temp;
	}
	if (n % 2 == 0)
	{
		temp = kolokwium4(n + 1) - 1;
		return temp;
	}
}
int main()
{
	int n1 = 3;
	int n2 = 44;
	printf("%d\n", kolokwium4(n1));
	printf("%d\n", kolokwium4(n2));
	return 0;
}