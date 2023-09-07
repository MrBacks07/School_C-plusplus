#include <iostream>

using namespace std;

/*
Zadanie 1.10: Napisać program obliczający pole powierzchni kuli o promieniu r. P=4*PI*r*r. Uwaga: PI należy zadeklarować jako stałą.
*/

int main()
{
    const float pi_Value = 3.1415f;
    float radius;

    cout << "Podaj promien kuli: ";
    cin >> radius;

    cout << "\nPole powierzchni twojej kuli wynosi - " << 4*pi_Value*radius*radius; 

    return 0;
}

