#include <iostream>

using namespace std;

/*
Zadanie 1.07: Napisać program obliczający obwód kwadratu o podanym przez użytkownika boku a. Ob=4*a.
*/

int main()
{
    float aSide;

    cout << "Podaj bok kwadratu: ";
    cin >> aSide;

    cout << "\nObwod twojego kwadratu wynosi - " << 4*aSide; 

    return 0;
}

