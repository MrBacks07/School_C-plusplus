#include <iostream>

using namespace std;

// Zadanie 4.03 Napisać 2argumentową funkcję, której argumentami jest tablica liczb całkowitych, oraz liczba całkowita określająca rozmiar tablicy. Funkcja ma zwracać ilość wystąpień liczby 0 w tablicy. Napisać program demonstrujący działanie powyższej funkcji.

int counter;

int CountZeros(int tablica[], int size)
{
    counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (tablica[i] == 0)
            counter++;
    }

    return counter;
}

int main()
{
    int tablica[10] = {2, 0, 12, 4, 7, 4, 0, -22, 123, 0};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    cout << CountZeros(tablica, rozmiar);
    
    return 0;
}


