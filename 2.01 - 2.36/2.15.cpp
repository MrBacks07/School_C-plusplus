#include <iostream>

using namespace std;

// Zadanie 2.15: Napisać program wczytujący z klawiatury liczbę całkowitą, a następnie wyświetlający informację, czy liczba ta jest większa od zera, czy nie.

int main()
{
    int x;

    cout << "Podaj swoja liczbe: ";
    cin >> x;

    if (x > 0)
    {
        cout << x << " jest wieksze od zera";
    }
    else
    {
        cout << x << " nie jest wieksze od zera";
    }
    

    return 0;
}

