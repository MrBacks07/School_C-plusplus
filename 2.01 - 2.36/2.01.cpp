#include <iostream>

using namespace std;

/*
Zadanie 2.01: Napisać program tablicujący funkcję y=A*x^2+B w przedziale od 0.0 do 1.0 co 0.1 dla podanych przez użytkownika wartości parametrów A i B.
*/

int main()
{
    float a;
    float b;

    cout << "Podaj parametr A: ";
    cin >> a;

    cout << "Podaj parametr B: ";
    cin >> b;

    for (float i = 0; i < 1.01; i+=0.1)
    {
        cout << "Y dla X=" << i << " wynosi - " << a*i*i+b << "\n";
    }

    return 0;
}

