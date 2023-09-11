#include <iostream>
#include <math.h>

using namespace std;

// Zadanie 4.13 Napisać 3argumentową funkcję, której argumentami jest tablica liczb całkowitych, liczba całkowita określająca rozmiar tablicy, oraz liczba całkowita x. Funkcja ma zwracać pozycję pierwszego wystąpienia liczby x w tablicy. Jeżeli x nie występuje w tablicy to funkcja ma zwracać 1. Napisać program demonstrujący działanie powyższej funkcji.

int FindNumber(int tablica[], int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        if (tablica[i] == x)
            return i;
    }

    return 1;
}

int main()
{
    int tablica[10] = {2, 3, 12, 4, 7, 4, 2, -22, 123, 7794};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    cout << FindNumber(tablica, rozmiar, 1223);
    
    return 0;
}


