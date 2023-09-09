#include <iostream>

using namespace std;

// Zadanie 3.17: Napisać dwuargumentową funkcję której argumentami są: tablica liczb typu integer, oraz liczba typu integer określająca rozmiar tablicy. Funkcja ma zwracać największą liczbę znalezioną w tablicy.

int HighestNumber(int tablica[], int size)
{
    int max = tablica[0];

    for (int i = 1; i < size; i++)
    {
        if (tablica[i] > max)
            max = tablica[i];
    }

    return max;
    
}

int main()
{
    int tablica[] = {13, 5, 6, 9, 12, 20, 3, 8, 11};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    int wynik = HighestNumber(tablica, rozmiar);

    cout << wynik;
    
    return 0;
}

