#include <iostream>

using namespace std;

// Zadanie 3.18: Napisać dwuargumentową funkcję której argumentami są: tablica liczb typu integer, oraz liczba typu integer określająca rozmiar tablicy. Funkcja ma zwracać średnią liczb z tablicy.

int AverageNumber(int tablica[], int size)
{
    int suma = 0;
    for (int i = 1; i < size; i++)
        suma += tablica[i];

    return suma/size;
}

int main()
{
    int tablica[] = {13, 5, 6, 9, 12, 20, 3, 8, 11};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    int wynik = AverageNumber(tablica, rozmiar);

    cout << wynik;
    
    return 0;
}