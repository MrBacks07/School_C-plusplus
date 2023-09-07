#include <iostream>

using namespace std;

/*
Zadanie 1.06: Napisać program obliczający obwód koła o podanym przez użytkownika promieniu r. Ob=2*PI*r. Uwaga: PI należy zadeklarować jako stałą.
*/

int main()
{
    const float pi_Value = 3.1415f;
    float radius;

    cout << "Podaj promien kola: ";
    cin >> radius;

    cout << "\nObwod twojego kola wynosi - " << 2*pi_Value*radius; 

    return 0;
}

