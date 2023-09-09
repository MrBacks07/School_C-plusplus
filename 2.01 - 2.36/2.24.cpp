#include <iostream>

using namespace std;

// Zadanie 2.24: Napisać program wczytujący z klawiatury dwie liczby całkowite, a nastepnie wyświetlający informację, czy liczby te są takie same, czy nie.

int main()
{
    int number1, number2;

    cout << "Podaj swoja pierwsza liczbe: ";
    cin >> number1;
    
    cout << "Podaj swoja druga liczbe: ";
    cin >> number2;

    if (number1 == number2)
    {
        cout << "Twoje liczby sa takie same";
    }
    else
    {
        cout << "Twoje liczby nie sa takie same";
    }

    return 0;
}

