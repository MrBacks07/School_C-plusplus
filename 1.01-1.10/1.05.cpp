#include <iostream>

using namespace std;

/*
Zadanie 1.05: Napisać program obliczający pole trapezu o podanych przez użytkownika długościach podstaw (a i b), oraz wysokości (h). P=0.5*(a+b)*h.
*/

int main()
{
    float aBase;
    float bBase;
    float height;

    cout << "Podaj pierwsza podstawe trapezu: ";
    cin >> aBase;

    cout << "Podaj druga podstawe trapezu: ";
    cin >> bBase;

    cout << "Podaj wysokosc trapezu: ";
    cin >> height;

    cout << "\nPole twojego trapezu wynosi - " << 0.5*(aBase+bBase)*height; 

    return 0;
}

