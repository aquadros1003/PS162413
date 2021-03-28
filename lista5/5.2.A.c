#include <stdio.h>
#include <stdlib.h>

int rekurencja(int n)
{
	if (n == 0 | n== 1)
		return 2;
	else if (n%2 == 0)
		return  rekurencja(n - 1) + n;
    else
        return 2 * rekurencja(2*n) - n;
}
int main()
{
    printf("%d\n", rekurencja(1));
    printf("%d\n", rekurencja(7));

}

