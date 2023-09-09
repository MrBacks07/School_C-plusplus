#include <iostream>

using namespace std;

// Zadanie 2.20: Napisać program wczytujący z klawiatury dwie liczby całkowite, a nastepnie wyświetlający mniejszą z nich.

int main()
{
    int number1, number2;

    cout << "Podaj swoja pierwsza liczbe: ";
    cin >> number1;

    cout << "Podaj swoja druga liczbe: ";
    cin >> number2;

    if (number1 < number2)
    {
        cout << number1;
    }
    else
    {
        cout << number2;
    }
    

    return 0;
}

