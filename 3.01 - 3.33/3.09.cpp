#include <iostream>
#include <algorithm>

using namespace std;

// Zadanie 3.09: Napisać program wczytujący do tablicy 10 liczb typu integer podanych przez użytkownika, sortujący te liczby malejąco, a następnie wyświetlający je na ekran.

int tablica[9];

int main()
{
    cout << "Podaj 10 liczb do tablicy:\n";
    for (int i = 0; i <= 9; i++)
    {
        cout << "Liczba "<< i+1 <<": ";
        cin >> tablica[i];
    }

    sort(tablica, tablica + 10, greater<int>());

    cout << "Podane przez Ciebie liczby sortujac malejaco: \n";

    for (int i = 0; i <= 9; i++)
        cout << "=> " << tablica[i] << "\n";


    return 0;
}

