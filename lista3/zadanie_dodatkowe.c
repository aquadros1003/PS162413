#include <stdio.h>
#include <stdlib.h> 
int main()
{ 
//wpisz wartosci zmiennych po wykonaniu danej linijki kodu 
int a = 162413; //tu wpisz swoj numer indeksu 
int b=a%12; 
int c=b%7; 
int d= (b+=4)-(c*=2); // b=9 , c= 10, d=-1
c=(d^=2); // b=9 , c=-3 , d=-3
d=(b/=4)*(c-=3); // b=2 , c=-6 , d=-12
return 0;
}
