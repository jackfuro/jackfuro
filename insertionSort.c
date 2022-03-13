#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pesel[] = {0,3,4,4,2,1,1,6,7,5,5,1,0,8,2}; // utworzenie tablicy
    insertionSort(pesel); // wywolanie funkcji w main
    for(int i = 0;i < 15 ;i++) // wypisanie posortowanej tablicy
    {
        printf("%d",pesel[i]);
    }
}
    void insertionSort(int tab[]) // deklaracja funkcji z argumentem
    {
        for(int i =1 ;i<15;i++)
        {
            int temp = tab[i]; // pomocnicza zmienna
            int j=i-1; // utworzenie zmiennej
            while(j>=0 && tab[j]>temp) // sprawdzanie czy element pierwszy jest wiekszy
                {
                    tab[j+1]=tab[j]; // przypisujemy wiekszy element na miejsce mniejszego
                    j--; // dekrementacja zmiennej j
                    tab[j+1]=temp; //  przypisujemy mniejszy element na miejsce wiekszego
                }
        }
    }
