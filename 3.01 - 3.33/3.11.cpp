#include <iostream>

using namespace std;

// Zadanie 3.11: Napisać program wczytujący do tablicy 10 liczb typu integer podanych przez użytkownika, a nastepnie wyświetlający ile jest wśród nich liczb dodatnich i ujemnych.

int tablica[9];

int main()
{
    cout << "Podaj 10 liczb do tablicy:\n";
    for (int i = 0; i <= 9; i++)
    {
        cout << "Liczba "<< i+1 <<": ";
        cin >> tablica[i];
    }

    int plus = 0, minus = 0;
    for (int i = 0; i <= 9; i++)
    {
        if (tablica[i] > 0)
            plus += 1;
        else
            minus += 1;
    }

    cout << "W twojej tablicy znajduje sie " << plus << " liczb dodatnich oraz " << minus << " liczb ujemnych";
    

    return 0;
}

