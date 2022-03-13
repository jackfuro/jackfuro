#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pesel[] = {0,3,4,4,2,1,1,6,7,5,5}; // tablica pesel
    selectionSort(pesel); // wywolanie funkcji sortowania tablicy
    for(int i = 0;i < 11 ;i++)
    {
    printf("%d",pesel[i]); // wypisywanie elementow tablicy po uporzadkowaniu
    }}
    void selectionSort(int tab[])
    {
    for(int i = 0;i<10;i++) // petla operuje od 0("pierwszego") do 9 elementu
    {
    int min = i;
    for(int j = i+1; j<11;j++) // petla operuje od 1 do 10(ostatniego) elementu
    {
    if(tab[min] > tab[j])
    {
    min = j;
    }}
    int temp = tab[i]; // wykorzystujemy pomocnicza dana
    tab[i] = tab[min]; // przypisujemy mniejszy element na miejsce wiekszego
    tab[min] = temp; // przpisujemy wikeszy element na miejsce mniejszego
    }}
