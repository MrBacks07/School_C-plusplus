#include <iostream>

using namespace std;

// Zadanie 3.10: Napisać program wczytujący do tablicy 10 liczb typu integer podanych przez użytkownika, a nastepnie wyświetlający ile jest wśród nich liczb parzystych i nieparzystych.

int tablica[9];

int main()
{
    cout << "Podaj 10 liczb do tablicy:\n";
    for (int i = 0; i <= 9; i++)
    {
        cout << "Liczba "<< i+1 <<": ";
        cin >> tablica[i];
    }

    int even = 0, odd = 0;
    for (int i = 0; i <= 9; i++)
    {
        if (tablica[i] % 2 == 0)
            even += 1;
        else
            odd += 1;
    }

    cout << "W twojej tablicy znajduje sie " << even << " liczb parzystych oraz " << odd << " liczb nieparzystych";
    

    return 0;
}

