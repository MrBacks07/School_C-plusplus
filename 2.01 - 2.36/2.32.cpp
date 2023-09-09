#include <iostream>

using namespace std;

// Zadanie 2.32: Napisać program wczytujący z klawiatury liczbę całkowitą, a następnie wyświetlający informację, czy liczba ta jest mniejsza niż 15.

int main()
{
    int number;

    cout << "Podaj swoja liczbe: ";
    cin >> number;
    
    if (number < 15)
    {
        cout << "Twoja liczba jest mniejsza niz 15";
    }

    return 0;
}

