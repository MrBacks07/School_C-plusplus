#include <iostream>

using namespace std;

/*
Zadanie 1.04: Napisać program obliczający pole równoległoboku o podanych przez użytkownika
 przekątnych p i q. P=0.5*p*q.
*/

int main()
{
    float p;
    float q;

    cout << "Podaj pierwsza przekatna rownolegloboku: ";
    cin >> p;

    cout << "A teraz podaj druga przekatna rownolegloboku: ";
    cin >> q;

    cout << "\nPole twojego rownolegloboku wynosi - " << 0.5*p*q; 

    return 0;
}

