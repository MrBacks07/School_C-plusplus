#include <iostream>

using namespace std;

// Zadanie 3.26: Napisać dwuargumentową procedurę której argumentami są: tablica liczb typu integer, oraz liczba typu integer określająca rozmiar tablicy. Procedura ma zerować wszystkie elementy tablicy będącej argumentem procedury.

void ClearTableElements(int tablica[], int size)
{
    for (int i = 0; i < size; i++)
    {
        tablica[i] = 0;
    }
}

int main()
{
    int tablica[] = {13, 5, 6, 9, 12, 20, 3, 8, 11};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    ClearTableElements(tablica, rozmiar);
    
    return 0;
}

