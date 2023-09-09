#include <iostream>

using namespace std;

// Zadanie 3.27: Napisać dwuargumentową procedurę której argumentami są: tablica liczb typu integer, oraz liczba typu integer określająca rozmiar tablicy. Procedura ma wczytywać z klawiatury liczby całkowite i umieszczać je w kolejnych elementach tablicy.

void SetTableElements(int tablica[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> tablica[i];
    }
}

int main()
{
    int tablica[10];
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    SetTableElements(tablica, rozmiar);
    
    return 0;
}
