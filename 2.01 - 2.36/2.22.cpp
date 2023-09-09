#include <iostream>

using namespace std;

// Zadanie 2.22: Napisać program wczytujący z klawiatury liczbę rzeczywistą, a następnie wyświetlający informację, czy liczba ta jest większa od zera i jednocześnie mniejsza od 100.

int main()
{
    int number;

    cout << "Podaj swoja liczbe: ";
    cin >> number;

    if (number > 0 && number < 100)
    {
        cout << "Twoja liczba miesci sie w przedzial 0-100";
    }
    else
    {
        cout << "Twoja liczba nie miesci sie w przedziale 0-100";
    }
    

    return 0;
}

