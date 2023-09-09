#include <iostream>

using namespace std;

// Zadanie 3.29: Napisać 3-argumentową funkcję której argumentami są: tablica liczb typu integer (T), liczba typu integer (N) określająca rozmiar tablicy, oraz jeszcze jedna liczba całkowita (C). Funkcja ma zwracać ilość wystąpień liczby C w tablicy.

int CounterNumberInTab(int T[], int N, int C)
{
    int counter = 0;

    for (int i = 0; i < N; i++)
    {
        if (T[i] == C)
            counter++;
    }

    return counter;
}

int main()
{
    int T[10] = {2, 3, 12, 5, 7, 4, 2, -22, 5, 7794};
    int rozmiar = sizeof(T) / sizeof(T[0]);

    cout << CounterNumberInTab(T, rozmiar, 5);
    
    return 0;
}

