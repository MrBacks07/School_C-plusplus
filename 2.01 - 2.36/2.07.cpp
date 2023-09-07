#include <iostream>

using namespace std;

// Zadanie 2.07: Napisać program tablicujący funkcję y=1.5*x^2-2.2*x+0.4 w przedziale podanym przez użytkownika.

int main()
{
    int a;
    int b;

    cout << "Podaj poczatek przedzialu: ";
    cin >> a;

    cout << "Podaj koniec przedzialu: ";
    cin >> b;

    for (float i = a; i <= b; i++)
    {
        cout << "Dla X=" << i << " Y wynosi - " << 1.5*i*i-2.2*i+0.4 << "\n";
    }
    

    return 0;
}

