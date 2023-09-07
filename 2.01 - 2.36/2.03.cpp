#include <iostream>

using namespace std;

/*
Zadanie 2.03: Napisać program tablicujący funkcję y=2.5*x^3-4.8*x^2+1.1 w przedziale podanym przez użytkownika.
*/

int main()
{
    int a;
    int b;

    cout << "Podaj poczatek przedzialu: ";
    cin >> a;

    cout << "\nPodaj koniec przedzialu: ";
    cin >> b;

    for (int i=a; i <= b; i++)
    {
        cout << "\n Y dla X=" << i << " wynosi - " << 2.5*i*i*i-4.8*i*i+1.1;
    }

    return 0;
}

