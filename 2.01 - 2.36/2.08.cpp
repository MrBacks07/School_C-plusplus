#include <iostream>

using namespace std;

// Zadanie 2.08: Napisać program obliczający sumę S=S+(n/(2*n-1)) dla n=0 do N (N podane przez użytkownika).

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

