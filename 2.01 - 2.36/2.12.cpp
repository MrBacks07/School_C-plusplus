#include <iostream>
#include <math.h>

using namespace std;

// Zadanie 2.12: Napisać program wyświetlający kolejne potęgi liczby 2 tzn. 2^1, 2^2, ..., 2^N, dla N podanego przez użytkownika.

int main()
{
    float n;

    cout << "Podaj twoje N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Potega liczby 2 do liczby " << i << " wynosi - " << pow(2, i) << "\n";
    }
    

    return 0;
}

