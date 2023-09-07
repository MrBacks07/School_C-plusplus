#include <iostream>

using namespace std;

/*
Zadanie 1.03: Napisać program obliczający pole trójkąta o podanych przez użytkownika: podstawie (a) 
i wysokości (h). P=0.5*a*h.
*/

int main()
{
    float triangleFloor;
    float triangleHeight;

    cout << "Podaj podstawe twojego trojkata: ";
    cin >> triangleFloor;

    cout << "A teraz podaj bok wysokosc tego trojkata: ";
    cin >> triangleHeight;

    cout << "\nPole twojego trojkata wynosi - " << 0.5*triangleFloor*triangleHeight; 

    return 0;
}

