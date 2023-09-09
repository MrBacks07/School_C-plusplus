#include <iostream>

using namespace std;

// Zadanie 3.28: Napisać dwuargumentową procedurę której argumentami są: tablica liczb typu integer, oraz liczba typu integer określająca rozmiar tablicy. Procedura ma wyświetlać kolejne elementy tablicy na ekran.

void DisplayTabElems(int tablica[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i+1 << " element tablicy => " << tablica[i] << "\n";
    }
}

int main()
{
    int tablica[10] = {2, 3, 12, 4, 7, 4, 2, -22, 123, 7794};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    DisplayTabElems(tablica, rozmiar);
    
    return 0;
}


