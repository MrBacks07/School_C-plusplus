#include <iostream>

using namespace std;

// Zadanie 2.18: Napisać program wczytujący z klawiatury liczbę rzeczywistą, a następnie wyświetlający informację, czy liczba ta jest dodatnia.

int main()
{
    int number;

    cout << "Podaj swoja liczbe: ";
    cin >> number;

    if (number > 0)
    {
        cout << "twoja liczba jest dodatnia";
    }
    else if (number == 0)
    {
        cout << "twoja liczba jest bezwzgledna";
    }
    else
    {
        cout << "twoja liczba jest ujemna";
    }
    

    return 0;
}

