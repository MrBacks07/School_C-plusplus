#include <iostream>

using namespace std;

// Zadanie 4.08 Napisać 2argumentową funkcję, której argumentami jest tablica liczb całkowitych, oraz liczba całkowita określająca rozmiar tablicy. Funkcja ma zerować wszystkie elementy tablicy. Napisać program demonstrujący działanie powyższej funkcji.

void SetToZeroTable(int tablica[], int size)
{
    for (int i = 0; i < size; i++)
    {
        tablica[i] = 0;
    }
}

int main()
{
    int tablica[10] = {2, 3, 12, 4, 7, 4, 2, -22, 123, 7794};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    SetToZeroTable(tablica, rozmiar);
    
    
    return 0;
}


