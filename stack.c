#include <stdio.h>
#include <stdlib.h>
int top = -1; // utworzenie zmiennej globalnej
int stack[] ; //utworzenie tablicy
int *w = stack; //wskaznik
int main()
{
*stack = (int*)malloc(sizeof(int)*6); //wykorzystanie wskaznika
push(6); // wywo³anie funckji z argumentem
push(16);
push(26);
push(36);
push(46);
push(56);
for(int i=0;i<top+1;i++) // petla pozwalajaca operowaæ na wszystkich elementach tablicy
    {
        printf("%d ", stack[i]); //wypisywanie kolejnych elementow tablicy
    }
    pop(); // wyowlanie funckji
    pop();
    for(int i=0;i<top+1;i++)// petla pozwalajaca operowaæ na wszystkich elementach tablicy
    {
        printf("%d ", stack[i]);//wypisywanie kolejnych elementow tablicy
    }
}
int pop() // funkcja usuwajaca elementy o najwyzszym indeksie z tablicy
{
    stack_empty(top); // wyow³anie funkcji
    if(top>=1) // sprawdzenie zmiennej globalnej
        {
            top = top -1; //dekrementacja zmiennej globalnej
        }
}
void push(int element) // funkcja dodajaca element do tablicy
{
    top+=1; // ikrementacja zmiennej globalnej
    stack[top]= element; // dodanie elementu do tablicy
}
void stack_empty(int top) // funkcja sprawdzajaca stan stosu
{
    if (top==-1) // przyrownanie zmiennej globalnej
        {
           printf("stos pusty\n"); // wypisanie odpowiedzi
        }
    else
        {
            printf("stos niepusty\n");// wypisanie odpowiedzi
        }
        }
}
void top_(int stack[],int top) // funkcja wypisujaca element z najwyzszym indeksem
{
     printf("%d ", stack[top]); // wypisanie
}
