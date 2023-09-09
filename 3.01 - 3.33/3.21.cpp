#include <iostream>
#include <algorithm>

using namespace std;

// Zadanie 3.21: Napisać dwuargumentową procedurę której argumentami są: tablica liczb typu integer, oraz liczba typu integer określająca rozmiar tablicy. Procedura ma sortować tablicę malejąco.

void SortingDescending(int tablica[], int size)
{
    sort(tablica, tablica + size, greater<int>());
}

int main()
{
    int tablica[] = {13, 5, 6, 2, 9, 12, 20, 2, 3, 8, 11};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    SortingDescending(tablica, rozmiar);

    cout << "Tablica posortowana malejaco:\n";
    for (int i = 0; i < rozmiar; i++)
        cout << "=> " << tablica[i] << "\n";
    
    
    return 0;
}

