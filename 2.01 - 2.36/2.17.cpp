#include <iostream>

using namespace std;

// Zadanie 2.17: Napisać program wczytujący z klawiatury liczbę całkowitą, a następnie wyświetlający informację, czy liczba ta jest większa niż 10.

int main()
{
    int number;

    cout << "Podaj swoja liczbe: ";
    cin >> number;

    if (number > 10)
    {
        cout << number << " jest wieksze od 10";
    }
    else
    {
        cout << number << " nie jest wieksze od 10";
    }
    

    return 0;
}

