#include <stdio.h>
#include <stdlib.h>

int size = 0;

int main()
{
   int tab[10];


  insert(tab, 21);
  insert(tab, 66);
  insert(tab, 22);
  insert(tab, 15);
  insert(tab, 72);
  insert(tab, 35);
  insert(tab, 19);
  insert(tab, 41);
  insert(tab, 91);
  insert(tab, 11);

  //deleteRoot(tab,66);

  for (int i = 0; i < size; ++i)
  {
       printf("%d ", tab[i]);
  }
}

void change(int *x , int *y)
{
int temp = *y;
*y = *x;
*x = temp;
}



void heapify  (int tab[], int size,int i)
{
    if (size ==1)
        {
        printf(tab);
    }
    else
        {
    int max = i;
    int iL = i + i + 1;
    int iP = i + i + 2;
if (iL < size && tab[iL] > tab[max])
      {
          max = iL;
      }
    if (iP < size && tab[iP] > tab[max])
    {
         max = iP;
    }
      if (max != i)
    {
      change(&tab[i], &tab[max]);
    heapify(tab, size, max);
    }
}
    }


    void insert(int tab[], int newValue)
    {
 if (size == 0)
  {
    tab[0] = newValue;
    size += 1;
  }
  else
  {
    tab[size] = newValue;
    size += 1;
    for (int i = size / 2 - 1; i >= 0; i--)
    {
     heapify(tab, size, i);
    }
  }

}

void deleteRoot(int tab[], int deleteNum)
{
    int i ;
  for (i = 0; i < size; i++) // pêtla wyszukujê z jakim indeksem tablicy wystepuje element ktory chcemy usunac
  {
    if (deleteNum == tab[i]) // warunek sprawdzajacy
      {
          break;
      }
  }

  change(&tab[i], &tab[size - 1]);
  size -= 1;
  for (int i = size / 2 - 1; i >= 0; i--)
  {
    heapify(tab, size, i);
  }
}


