#include <iostream>

using namespace std;

// Zadanie 2.05: Napisać program tablicujący funkcję y=A*x^3-B*x w przedziale 1 do 10 co 0.5 dla podanych przez użytkownika wartości parametrów A i B.

int main()
{
    float a;
    float b;

    cout << "Podaj twoje A: ";
    cin >> a;

    cout << "Podaj twoje B: ";
    cin >> b;

    for (float i = 1; i <= 10; i+=0.5)
    {
        cout << "Dla X=" << i << " Y wynosi - " << a*i*i*i-b*i << "\n";
    }
    

    return 0;
}

