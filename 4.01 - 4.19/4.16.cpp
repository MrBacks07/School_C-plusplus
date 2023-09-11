#include <iostream>
#include <math.h>

using namespace std;

// Zadanie 4.16 (*) Napisać 2argumentową funkcję, której argumentami jest tablica liczb całkowitych, oraz liczba całkowita określająca rozmiar tablicy. Funkcja ma sortować rosnąco liczby w tablicy. Proszę wykorzystać algorytm sortowania bąbelkowego. Napisać program demonstrujący działanie powyższej funkcji.

void BubblesSort(int tablica[], int size)
{
    for(int i=0;i<size;i++)
		for(int j=1;j<size-i;j++)
            if(tablica[j-1]>tablica[j])
                swap(tablica[j-1], tablica[j]);
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
    int tablica[10] = {2, 3, 12, 4, 7, 4, 2, -22, 123, 7794};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    BubblesSort(tablica, rozmiar);

    TabDisplay(tablica, rozmiar);
    
    return 0;
}


