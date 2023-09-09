#include <iostream>

using namespace std;

// Zadanie 2.29: Napisać program wczytujący z klawiatury liczbę całkowitą, a następnie wyświetlający informację, czy liczba ta jest mniejsza niż 88.

int main()
{
    int number;

    cout << "Podaj swoja liczbe: ";
    cin >> number;
    
    if (number < 88)
    {
        cout << "Twoja liczba jest mniejsza niz 88";
    }

    return 0;
}

