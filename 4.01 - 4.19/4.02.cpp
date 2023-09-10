#include <iostream>

using namespace std;

// Zadanie 4.02 Napisać 2argumentową funkcję, której argumentami jest tablica liczb całkowitych, oraz liczba całkowita określająca rozmiar tablicy. Funkcja ma zwracać największy element w tablicy. Napisać program demonstrujący działanie powyższej funkcji.

int max_num;

int GetMaxElem(int tablica[], int size)
{
    max_num = tablica[0];
    for (int i = 1; i < size; i++)
    {
        if (max_num < tablica[i])
            max_num = tablica[i];
    }

    return max_num;
}

int main()
{
    int tablica[10] = {2, 3, 12, 4, 7, 4, 2, -22, 123, 7794};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    cout << GetMaxElem(tablica, rozmiar);
    
    return 0;
}


