#include <iostream>

using namespace std;

// Zadanie 3.12: Napisać program wczytujący do tablicy 10 liczb typu integer podanych przez użytkownika, a następnie wyświetlający je w odwrotnej kolejności.

int tablica[9];

int main()
{
    cout << "Podaj 10 liczb do tablicy:\n";
    for (int i = 0; i <= 9; i++)
    {
        cout << "Liczba "<< i+1 <<": ";
        cin >> tablica[i];
    }

    cout << "Wypisuje ci wszystkie dodane przez ciebie liczby do tablicy ale w odwrotnej kolejnosci\n";
    for (int i = 9; i >= 0; i--)
    {
        cout << "=> " << tablica[i] << "\n";
    }
    

    return 0;
}

