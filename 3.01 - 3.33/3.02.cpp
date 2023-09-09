#include <iostream>

using namespace std;

// Zadanie 3.02: Napisać program wczytujący do tablicy 10 liczb typu integer podanych przez użytkownika i wyświetlający najmniejszą i najwiekszą z nich.

int main()
{
    int tablica[9], max, min;

    cout << "Podaj 10 liczb do tablicy:\n";
    for (int i = 0; i <= 9; i++)
    {
        cout << "Liczba "<< i+1 <<": ";
        cin >> tablica[i];
    }

    max = tablica[0];
    min = tablica[0];

    for (int i = 0; i <= 9; i++)
    {
        if (min > tablica[i])
            min = tablica[i];
    }

    for (int i = 0; i <= 9; i++)
    {
        if (max < tablica[i])
            max = tablica[i];
    }

    cout << "Minimalna liczba w twojej tablicy to - " << min << "\n";
    cout << "Maksymalna liczba w twojej tablicy to - " << max;


    return 0;
}

