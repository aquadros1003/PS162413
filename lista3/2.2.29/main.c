#include <stdio.h>
#include <stdlib.h>

int nwd(int n,int m)
{
    if (m == 0)
        return n;
    else
        return nwd(m,(n%m));
}
int main()
{
    int n;
    int m;
    scanf("%d", &n);
	scanf("%d", &m);
	printf("%d", nwd(n,m));
	return 0;
}
