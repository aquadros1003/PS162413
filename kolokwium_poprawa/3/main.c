#include <stdio.h>
#include <stdlib.h>
double foo(const double* wsk1, const double* const wsk2)
{
	double roznica;
	double a = *wsk1;
	const double b = *wsk2;
	roznica = a - b;
	return roznica;
}
int main()
{
	double a1 = 3434.6;
	const double b1 = 4343.5;
	double a2 = 4.6;
	const double b2 = 43.7;
	const double* wsk1a;
	const double* wsk2a;
	wsk1a = &a1;
	wsk2a = &b1;
	const double* wsk1b;
	const double* wsk2b;
	wsk1b = &a2;
	wsk2b = &b2;
	printf("%lf\n", foo(wsk1a, wsk2a));
	ntf("%lf\n", foo(wsk1b, wsk2b));

}
