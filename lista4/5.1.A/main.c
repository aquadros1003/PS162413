#include <stdio.h>
#include <stdlib.h>

void zamiana(int *a, int *b)
{
    int a_przed_zmiana = *a;
    *a = *b;
    *b = a_przed_zmiana;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    zamiana(&a, &b);
    printf("%d\n%d", a, b);
    return 0;
}
