#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int zadanie3(char*n1, char*n2)
{
    int ilosc=0;
    if(strlen(n1) > strlen(n2))
        for(int i = 0; i < strlen(n1);i++)
        {
            if(n1[i] == '@')
            {
                ilosc++;
            }
        }
    else if(strlen(n1) < strlen(n2))
        for(int i = 0; i < strlen(n2);i++)
        {
            if(n2[i] == '@')
            {
                ilosc++;
            }
        }
    else if(strlen(n1) == strlen(n2))
        for(int i = 0; i < strlen(n1);i++)
        {
            if(n1[i] == ' ')
            {
                ilosc++;
            }
        }
        return ilosc;
}
int main()
{
    char napis1[20]="abc dsds s@@ dsdde23";
    char napis2[20]="tE        Rdds  dsTS";
    printf("%s\n",napis1);
    printf("%s\n",napis2);
    printf("%d\n",strlen(napis1));
    printf("%d\n",strlen(napis2));
    printf("%d\n",foo(napis1,napis2));
    return 0;
}
