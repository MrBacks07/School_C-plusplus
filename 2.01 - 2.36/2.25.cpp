#include <iostream>

using namespace std;

// Zadanie 2.25: Napisać program wczytujący z klawiatury liczbę rzeczywistą, a następnie wyświetlający informację, czy liczba ta jest większa od zera i mniejsza od 10.

int main()
{
    int number;

    cout << "Podaj swoja liczbe: ";
    cin >> number;
    
    if (number > 0 && number < 10)
    {
        cout << "Twoja licba jest wieksza od 0 i mniejsza od 10";
    }

    return 0;
}

