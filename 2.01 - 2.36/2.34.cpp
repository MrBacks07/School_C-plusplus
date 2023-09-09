#include <iostream>

using namespace std;

// Zadanie 2.34 (*): Napisać program obliczający pierwiastki równania kwadratowego A*x*x+B*x+C dla A,B,C podanego przez użytkownika.

int main()
{
    int a, b, c;

    cout << "Podaj kolejno swoje liczby a, b oraz c: " << "\n";
    cin >> a;
    cin >> b;
    cin >> c;

    for (int x = -100; x <= 100; x++)
    {
        if (a*x*x+b*x+c == 0)
            cout << "Zgadza sie to dla X=" << x;
    }
    

    return 0;
}

