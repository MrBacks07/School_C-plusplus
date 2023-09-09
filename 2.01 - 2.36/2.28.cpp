#include <iostream>

using namespace std;

// Zadanie 2.28: Napisać program wczytujący z klawiatury liczbę całkowitą, a następnie wyświetlający jej wartość bezwzględną.

int main()
{
    int number;

    cout << "Podaj swoja liczbe: ";
    cin >> number;

    if (number < 0)
    {
        number *= -1;
        cout << "Wartosc bez wzgledna z twojej liczby wynosi " << number;
    }
    else
    {
        cout << "Wartosc bez wzgledna z twojej liczby wynosi " << number;
    }
    

    return 0;
}

