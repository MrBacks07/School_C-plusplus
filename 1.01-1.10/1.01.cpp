#include <iostream>

using namespace std;

/*
Zadanie 1.01: Napisać program obliczający pole koła o podanym przez użytkownika promieniu 
(Wzór na pole koła P=pi*r*r). Uwaga: Wartość PI (3.1415) należy zadeklarować jako stałą.
*/

int main()
{
    const float pi_Value = 3.1415f;
    float radius;

    cout << "Podaj promien kola: ";
    cin >> radius;

    cout << "\nPole twojego kola wynosi " << pi_Value*radius*radius; 

    return 0;
}

