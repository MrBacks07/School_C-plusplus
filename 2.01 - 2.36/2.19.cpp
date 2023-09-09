#include <iostream>

using namespace std;

// Zadanie 2.19: Napisać program wczytujący z klawiatury liczbę całkowitą, a następnie wyświetlający informację, czy liczba ta jest podzielna przez 7.

int main()
{
    int number;

    cout << "Podaj swoja liczbe: ";
    cin >> number;

    if (number % 7 == 0)
    {
        cout << "Twoja liczba jest podzielna przez 7";
    }
    else
    {
        cout << "Twoja liczba nie jest podzielna przez 7";
    }
    

    return 0;
}

