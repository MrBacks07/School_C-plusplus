#include <iostream>
#include <Windows.h>

using namespace std;

// Zadanie 2.14: Napisać program wczytujący z klawiatury dwie liczby całkowite, a nastepnie wyświetlający większą z nich.

int main()
{
    int value1, value2;

    cout << "Podaj pierwsza liczbe: ";
    cin >> value1;

    cout << "Podaj druga liczbe: ";
    cin >> value2;

    if (value1 > value2)
    {
        cout << value1 << " jest wieksze od " << value2;
    }
    else
    {
        cout << value2 << " jest wieksze od " << value1;
    }
    
    

    return 0;
}
