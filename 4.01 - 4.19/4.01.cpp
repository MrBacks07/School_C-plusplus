#include <iostream>

using namespace std;

// Zadanie 4.01 Napisać 2argumentową funkcję, której argumentami jest tablica liczb całkowitych, oraz liczba całkowita określająca rozmiar tablicy. Funkcja ma zwracać sumę elementów w tablicy. Napisać program demonstrujący działanie powyższej funkcji.

int sum;

int SumAllEms(int tablica[], int size)
{
    sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += tablica[i];
    }
    return sum;
}

int main()
{
    int tablica[10] = {2, 3, 12, 4, 7, 4, 2, -5, 15, 13};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    cout << SumAllEms(tablica, rozmiar);
    
    return 0;
}


