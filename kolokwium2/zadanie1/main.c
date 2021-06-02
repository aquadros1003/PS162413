#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[3][5] = {{1,-2,3,-4,11},{4,-2,5,6,7},{3,1,8,38,3}};
    int a=tab[1][-3]; //a=3
    int b=tab[2][-2]; //a=3  ,b=6
    a=b++; //a=6  ,b=7
    b=a^2;  //a= 6 ,b=4
    a=(b+=3)+7;  //a=14  ,b=7
    b=**((tab)+2); //a=14  ,b=3
    ++a; //a=15  ,b=3
    return 0;
}
