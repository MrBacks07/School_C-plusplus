#include <iostream>

using namespace std;

/*
Zadanie 1.09: Napisać program obliczający obwód trapezu o podanych przez użytkownika bokach a, b, c i d. Ob=a+b+c+d.
*/

int main()
{
    float aSide, bSide, cSide, dSide;

    cout << "Podaj bok A trapezu: ";
    cin >> aSide;

    cout << "Podaj bok b trapezu: ";
    cin >> bSide;

    cout << "Podaj bok c trapezu: ";
    cin >> cSide;

    cout << "Podaj bok d trapezu: ";
    cin >> dSide;

    cout << "\nObwod twojego trapezu wynosi - " << aSide+bSide+cSide+dSide; 

    return 0;
}

