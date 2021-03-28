#include <stdio.h>
#include <stdlib.h>
int funkcja(int n)
{
	if (n < 2)
		return 1;
	else
		return n - 1 + funkcja(n - 1);
}
int main()
{
    int n;
	scanf("%d", &n);
	printf("%d\n", funkcja(n));
	return 0;
}

