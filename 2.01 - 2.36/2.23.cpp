#include <iostream>

using namespace std;

// Zadanie 2.23: Napisać program wczytujący z klawiatury liczbę całkowitą, a następnie wyświetlający informację, czy liczba ta jest mniejsza od zera, czy nie. 


int main()
{
    int number;

    cout << "Podaj swoja liczbe: ";
    cin >> number;
    
    if (number < 0)
    {
        cout << "Twoja liczba jest mniejsza od zera";
    }
    else
    {
        cout << "Twoja liczba nie jest mniejsza od zera";
    }

    return 0;
}

