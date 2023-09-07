#include <iostream>

using namespace std;

/*
Zadanie 1.02: Napisać program obliczający pole prostokąta o podanych przez użytkownika bokach a i b
 (P=a*b).
*/

int main()
{
    float a_Side;
    float b_Side;

    cout << "Podaj bok A twojego prostokata: ";
    cin >> a_Side;

    cout << "A teraz podaj bok B twojego prostokata: ";
    cin >> b_Side;

    cout << "\nPole twojego prostokata wynosi - " << a_Side*b_Side; 

    return 0;
}

