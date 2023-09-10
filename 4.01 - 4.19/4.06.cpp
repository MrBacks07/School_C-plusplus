#include <iostream>

using namespace std;

// Zadanie 4.06 Napisać 2argumentową funkcję, której argumentami jest tablica liczb całkowitych, oraz liczba całkowita określająca rozmiar tablicy. Funkcja ma wyświetlać elementy tablicy w odwrotnej kolejności („od końca”). Napisać program demonstrujący działanie powyższej funkcji.

void ViewElemsFromEnd(int tablica[], int size)
{
    for (int i = size-1; i >= 0; i--)
    {
        cout << i+1 << ": " << tablica[i] << "\n";
    }
}

int main()
{
    int tablica[10] = {2, 3, 12, 4, 7, 4, 2, -22, 123, 7794};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    ViewElemsFromEnd(tablica, rozmiar);
    
    return 0;
}


