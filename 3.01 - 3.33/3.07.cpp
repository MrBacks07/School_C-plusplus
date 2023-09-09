#include <iostream>

using namespace std;

// Zadanie 3.07: Napisać program który wypełnia 10-cio elementową tablicę typu integer kolejnymi potęgami liczby 2, a następnie wyświetla tą tablicę na ekran.

int main()
{
    int tablica[9];

    tablica[0] = 2;

    for (int i = 1; i <= 9; i++)
    {
        tablica[i] = tablica[i-1]*2;
    }

    for (int i = 0; i <= 9; i++)
    {
        cout << "Liczba " << i+1 <<": " << tablica[i] << "\n";
    }


    return 0;
}

