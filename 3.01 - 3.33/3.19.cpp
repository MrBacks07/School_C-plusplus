#include <iostream>

using namespace std;

// Zadanie 3.19: Napisać dwuargumentową funkcję której argumentami są: tablica liczb typu integer, oraz liczba typu integer określająca rozmiar tablicy. Funkcja ma zwracać ilość wystąpień liczby 2 w tablicy.

int TwosCounter(int tablica[], int size)
{
    int twosCounter = 0;
    for (int i = 1; i < size; i++)
    {
        if (tablica[i] == 2)
            twosCounter++;
    }

    return twosCounter;
}

int main()
{
    int tablica[] = {13, 5, 6, 2, 9, 12, 20, 2, 3, 8, 11};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    int wynik = TwosCounter(tablica, rozmiar);

    cout << wynik;
    
    return 0;
}

