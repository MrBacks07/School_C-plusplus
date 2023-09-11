#include <iostream>
#include <math.h>

using namespace std;

// Zadanie 4.12 Napisać 2argumentową funkcję, której argumentami jest tablica liczb całkowitych, oraz liczba całkowita n określająca rozmiar tablicy. Funkcja ma odwrócić kolejność elementów w tablicy. Napisać program demonstrujący działanie powyższej funkcji.

void TabReverse(int tablica[], int size)
{
    int temp;
    for (int i = 0, j = size-1; i < size/2; i++, j--)
    {
        temp = tablica[i];
        tablica[i] = tablica[j];
        tablica[j] = temp;
    }
    
}

void TabDisplay(int tablica[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i << ": " << tablica[i] << "\n";
    }
}

int main()
{
    int tablica[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    TabReverse(tablica, rozmiar);

    TabDisplay(tablica, rozmiar);

    
    
    return 0;
}


