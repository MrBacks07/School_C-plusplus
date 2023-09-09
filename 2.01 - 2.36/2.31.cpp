#include <iostream>

using namespace std;

// Zadanie 2.31: Napisać program wczytujący z klawiatury liczbę całkowitą, a następnie wyświetlający informację, czy liczba ta jest podzielna przez 3.

int main()
{
    int number;

    cout << "Podaj swoja liczbe: ";
    cin >> number;
    
    if (number % 3 == 0)
    {
        cout << "Twoja liczba jest podzielna przez 3";
    }

    return 0;
}

