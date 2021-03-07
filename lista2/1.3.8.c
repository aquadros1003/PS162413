#include <stdio.h>
#include <stdlib.h>
int main()
{
	unsigned int figura;
	int a, b, h;
	int pole;
	printf("Jaka figura:\n1.kwadrat\n2.prostokat\n3.trojkat\n");
	scanf("%d", &figura);
	switch (figura)
	{
	case 0: break;
	case 1:
		printf("Podaj wymiary kwadratu\n");
		scanf("%d", &a);
		pole = a * a;
		break;
	case 2:
		printf("Podaj wymiary prostokata\n");
		scanf("%d\n%d", &a, &b);
		pole = a * b;
		break;
	case 3:
		printf("Podaj wymiary trojkata\n");
		scanf("%d\n%d", &a, &h);
		pole = a * h / 2;
		break;
	default:
		break;
	}
	printf("Pole = %d ", pole);
	return 0;
}
