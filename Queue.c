#include <stdio.h>
#include <stdlib.h>
int i = 0 ;
int tab[5];
int tablica[5];
int main()
{
    enqueue(5, tab);
    enqueue(6, tab);
    enqueue(7, tab);
    enqueue(8, tab);
    enqueue(9, tab);
    for(int j=0;j<5;j++)
        {
            printf("%d ",tab[j]);
        }
        dequeue(tab);
        printf(" tablica po usunieciu pierwszego elementu: ");
        for(int j=0;j<i;j++)
        {
            printf("%d ",tab[j]);
        }
}
void enqueue(int a, int tab[])
{
    if(i==0)
        {
            tab[i]=a;
            i++;
        }
    else
        {
            for(int j = 0;j<=i;j++)
            {
                tablica[j+1]=tab[j];
            }
            for(int j = 0;j<=i;j++)
            {
                tab[j]=tablica[j];
            }
            tab[0]=a;
            i++;
        }
}
void dequeue(int tab[])
{
    tab[i+1]=0;
    i--;
}
