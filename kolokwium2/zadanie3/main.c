#include <stdio.h>
#include <stdlib.h>

int suma(int **tab1,int **tab2, int n, int m)
{
    int suma=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;i++)
        {
            if(tab1[i][j]=!tab2[i][j])
                suma++;
        }
    }
    return suma;
}
int main()
{
    int **tab1=malloc(2*sizeof(int*));
    tab1[0]=malloc(3*sizeof(int));
    tab1[1]=malloc(3*sizeof(int));
    **tab1=5;
    *(*tab1+1)=-2;
    *(*tab1+2)=7;
    *(*(tab1+1))=4;
    *(*(tab1+1)+1)=-3;
    *(*(tab1+1)+2)=11;
    int **tab2=malloc(2*sizeof(int*));
    tab2[0]=malloc(3*sizeof(int));
    tab2[1]=malloc(3*sizeof(int));
    **tab2=3;
    *(*tab2+1)=-6;
    *(*tab2+2)=3;
    *(*(tab2+1))=7;
    *(*(tab2+1)+1)=-2;
    *(*(tab2+1)+2)=4;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("[%d,%d]=%d\n",i,j,tab1[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("[%d,%d]=%d\n",i,j,tab2[i][j]);
        }
    }
    printf("d\n",suma(tab1,tab2,2,3));
    return 0;
}
