#include <iostream>

using namespace std;

// Zadanie 4.04 Napisać 3argumentową funkcję, której argumentami jest tablica liczb całkowitych, liczba całkowita określająca rozmiar tablicy, oraz liczba całkowita x. Funkcja ma zwracać ilość wystąpień liczby x w tablicy. Napisać program demonstrujący działanie powyższej funkcji.

int counter;

int CountNumber(int tablica[], int size, int x)
{
    counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (tablica[i] == x)
            counter++;
    }

    return counter;
}

int main()
{
    int tablica[10] = {2, 3, 12, 4, 7, 4, 2, -22, 123, 7794};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    cout << CountNumber(tablica, rozmiar, 2);
    
    return 0;
}


