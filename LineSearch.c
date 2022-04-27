#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int tab[a]; //utworzenie tablicy o rozmiarze a
    printf("podaj %d wartoœci ca³kowitoliczbowych\n",a);
    for(int i = 0; i < a; i++) // petla umozliwajaca przypisywanie wartosci do wszystkich komorek tablicy
        {
            int b;
            scanf("%d", &b);
            tab[i]=b;
        }
    printf("podaj jaka liczbe mam odszukac\n");
    int szukana;
    scanf("%d", &szukana); // zapisanie liczby podanje przez uzytkownika do zmiennej
    for (int j = 0; j < a; ++j)// petla sprawdzajaca kazdy element tablicy czy jest rowny szukanej liczbie
  {
       if(tab[j]==szukana) // sprawdzenie warunku rownosci
        {
            printf("szukana liczba znajduje sie pod indeksem %d\n",j); // wypisanie indeksu pod jakim znajduje sie liczba
             printf("Adres znalezionego elementu:  %d",&tab[j]); // wypisanie adresu pod ktorym znajduje sie liczba
            break; // zakonczenie algorytmu po znalezieniu szukanej liczby
        }
        else if(j==a-1) //warunek sprawdzajacy czy jest to ostatni element tablicy
            {
                printf("nie znaleziono takiej liczby"); //komunikat o nie znlezieniu takiego elementu w tablicy
            }
  }
}
