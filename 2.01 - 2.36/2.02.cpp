#include <iostream>

using namespace std;

/*
Zadanie 2.02: Napisać program obliczający sumę S=1+2^2+3^2+...+N^2 dla N podanego przez użytkownika.
*/

int main()
{
    float n;

    cout << "Podaj twoje N: ";
    cin >> n;

    cout << "\nTwoja suma wynosi - " << 1+2*2+3*3+n*n;

    return 0;
}

