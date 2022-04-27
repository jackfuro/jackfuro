#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pivot ,tab[] = {31,42,14,52,32,17,76,67,99,45};
    int max = sizeof(tab) / sizeof(tab[0]);//pozyskanie rozmiaru tablicy
    insertionSort(tab,max);//wywolanie funkcji sortujacej tablice
    printf("podaj jaka liczbe mam odszukac\n");
    scanf("%d", &pivot); // zapisanie liczby podanej przez uzytkownika do zmiennej
    int wynik = binarySearch(tab,pivot,0,max);//wywolanie funckji szukajacej szukanej liczby
    if (wynik == -1)
    {
    printf("nie znaleziono takiej liczby");
    }
    else
    {
   printf("szukana liczba znajduje sie pod indeksem %d\n",wynik);
    }
    }

void insertionSort(int tab[],int max)
    {
      for(int i =1 ;i<max;i++)
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

    int binarySearch(int tab[], int pivot, int min, int max)
    {
    if (max >= min) // sprawdzanie czy dane zostaly poprawnie podane
        {
        int mid = min + (max - min) / 2; // obliczenie srodkowego elementu
        if (tab[mid] == pivot) // sprawdzanie czy element srodkowy jest elementem ktorego szukamy
            {
                return mid; // zwrocenie elementu srodkowego
            }
        if (tab[mid] > pivot) // sprawdzenie czy element srodkowy jest wiekszy od szukanego
            {
                return binarySearch(tab, pivot, min, mid - 1); // rekurencyjne wywolanie funckji ze odpowiednio zmieniejszonymi danymi
            }
        return binarySearch(tab, pivot, mid + 1, max); //przypadek w ktorym element szukany jest jest wiekszy , rekurencyjne wywolanie funckji ze zwieszkonymi danymi
        }

    return -1; // przypadek w ktorym algorytm nie znajduje szukanej liczby
    }



