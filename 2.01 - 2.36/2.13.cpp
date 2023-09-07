#include <iostream>
#include <math.h>

using namespace std;

// Zadanie 2.13: Napisać program obliczający sumę S=S+(-2)^n dla n=0 do N (N podane przez użytkownika.

int main()
{
    float n;

    cout << "Podaj twoje N: ";
    cin >> n;

    for (float i = 0; i <= n; i++)
    {
        cout << "Dla X=" << i << " suma wynosi - " << pow(-2, i) << "\n";
    }
    

    return 0;
}

