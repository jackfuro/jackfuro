#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pesel[] = {0,3,4,4,2,1,1,6,7,5,5,1,0,8,2}; // utworzenie tablicy
    bubbleSort(pesel); // wywolanie funkcji w main
    for(int i = 0;i < 15 ;i++) // wypisanie posortowanej tablicy
    {
        printf("%d",pesel[i]);
    }
}
    void bubbleSort(int tab[]) // deklaracja funkcji z argumentem
    {
        for(int i =0;i<14;i++) //
            {
                for(int j=0;j<14-i;j++) // 2 petle umozliwiaja operowanie na wszystkich elementach tablicy
                {
                    if(tab[j]>tab[j+1]) // porownywanie elementow "obok siebie"
                    {
                        int temp = tab[j]; // pomocnicza zmienna
                        tab[j]=tab[j+1]; // przypisujemy mniejszy element na miejsce wiekszego
                        tab[j+1]=temp; // przpisujemy wikeszy element na miejsce mniejszego
                    }
                }
            }
    }

