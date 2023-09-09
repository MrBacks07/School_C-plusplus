#include <iostream>

using namespace std;

// Zadanie 2.30: Napisać program wczytujący z klawiatury liczbę całkowitą, a następnie wyświetlający 1 jeżeli jest ona większa od zera, -1 jeżeli jest mniejsza od zera, lub 0 – jeżeli jest równa zero.

int main()
{
    int number;

    cout << "Podaj swoja liczbe: ";
    cin >> number;
    
    if (number > 0)
    {
        cout << "1";
    }
    else if (number == 0)
    {
        cout << "0";
    }
    else if (number < 0)
    {
        cout << "-1";
    }

    return 0;
}

