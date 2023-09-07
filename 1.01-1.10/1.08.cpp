#include <iostream>

using namespace std;

/*
Zadanie 1.08: Napisać program obliczający obwód prostokąta o podanych przez użytkownika bokach a i b. Ob=2*a+2*b.
*/

int main()
{
    float aSide;
    float bSide;

    cout << "Podaj bok A prostokata: ";
    cin >> aSide;

    cout << "Podaj bok B prostokata: ";
    cin >> bSide;

    cout << "\nObwod twojego prostokata wynosi - " << 2*aSide+2*bSide; 

    return 0;
}

