#include <iostream>

using namespace std;

// Zadanie 2.35 (*): Napisać program obliczający N-ty element ciągu Fibonacciego.

int main()
{
    int number, counter = 0;

    cout << "Podaj swoja liczbe: ";
    cin >> number;
    
    for (int i = 1; i <= number; i++)
    {
        counter += i;
    }

    cout << "Dla liczby " << number << " ciag Fibonacciego wynosi " << counter;
    

    return 0;
}

