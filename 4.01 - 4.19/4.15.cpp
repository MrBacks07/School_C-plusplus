#include <iostream>
#include <math.h>

using namespace std;

// Zadanie 4.15 Napisać 4argumentową funkcję, której argumentami są: tablica liczb całkowitych a, liczba n określająca rozmiar tablicy, oraz liczby całkowite x i y. Funkcja ma znaleźć w tablicy wszystkie wystąpienia liczby x i zastąpić je liczbą y. Napisać program demonstrujący działanie powyższej funkcji.

void ChangeTabValue(int tablica[], int size, int x, int y)
{
    for (int i = 0; i < size; i++)
    {
        if (tablica[i] == x)
            tablica[i] = y;
    }
}

int main()
{
    int tablica[10] = {2, 3, 12, 4, 7, 4, 2, -22, 123, 7794};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    ChangeTabValue(tablica, rozmiar, 2, 5);
    
    return 0;
}


