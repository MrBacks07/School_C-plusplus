#include <iostream>

using namespace std;

// Zadanie 2.21: Napisać program wczytujący z klawiatury liczbę całkowitą, a następnie wyświetlający informację, czy liczba ta jest większa niż 33.

int main()
{
    int number;

    cout << "Podaj swoja liczbe: ";
    cin >> number;

    if (number > 33)
    {
        cout << "Twoja liczba jest wieksza niz 33";
    }
    else
    {
        cout << "Twoja liczba nie jest wieksza niz 33";
    }
    

    return 0;
}

