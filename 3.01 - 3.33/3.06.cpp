#include <iostream>

using namespace std;

// Zadanie 3.06: Napisać program wczytujący do tablicy 10 liczb typu real podanych przez użytkownika i wyświetlający ich sumę.

int main()
{
    float tablica[9], sum = 0;

    cout << "Podaj 10 liczb do tablicy:\n";
    for (int i = 0; i <= 9; i++)
    {
        cout << "Liczba "<< i+1 <<": ";
        cin >> tablica[i];
    }

    for (int i = 0; i <= 9; i++)
    {
        sum += tablica[i];
    }

    cout << "Suma liczb w tablicy to - " << sum;


    return 0;
}
