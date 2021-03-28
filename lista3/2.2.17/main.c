#include <stdio.h>
#include <stdlib.h>
int zliczanie(void)
{
	static int liczba = 0;
	int i = 0;
	i++;
	liczba++;
	return liczba;
}
int main()
{
    zliczanie();
    printf("%d", zliczanie());
    return 0;
}
