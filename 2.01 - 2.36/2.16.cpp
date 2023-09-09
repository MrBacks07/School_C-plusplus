#include <iostream>

using namespace std;

// Zadanie 2.16: Napisać program wczytujący z klawiatury liczbę całkowitą, a następnie wyświetlający informację, czy liczba ta jest parzysta, czy nie.

int main()
{
    int number;

    cout << "Podaj swoja liczbe calkowita: ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "Twoja liczba jest parzysta";
    }
    else
    {
        cout << "Twoja liczba jest nieparzysta";
    }
    

    return 0;
}

