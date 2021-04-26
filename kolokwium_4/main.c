#include <stdio.h>
#include <stdlib.h>
int kolokwium4(n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 2;
	if (n == 2)
		return 2;
	if (n % 3 == 0)
		return kolokwium4(n / 3) + 1;
	if (n % 3 == 1)
		return kolokwium4(((n-1) / 3) * 2);
	if (n % 3 == 2)
		return 3;
}
int main()
{
	int n1 = 0;
	int n2 = 777;
	printf("%d\n", kolokwium4(n1));
	printf("%d\n", kolokwium4(n2));
	return 0;
}
