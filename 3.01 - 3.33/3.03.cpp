#include <iostream>

using namespace std;

// Zadanie 3.03: Napisać program wczytujący do tablicy 10 liczb typu real podanych przez użytkownika i wyświetlający ich średnią.

int main()
{
    float tablica[9];
    float sum = 0;

    cout << "Podaj 10 liczb do tablicy z ktorej ja oblicze ci srednia:\n";
    for (int i = 0; i <= 9; i++)
    {
        cout << "Liczba "<< i+1 <<": ";
        cin >> tablica[i];
    }

    for (int i = 0; i <= 9; i++)
    {
        sum += tablica[i];
    }

    cout << "Srednia z podanych przez ciebie liczb wynosi " << sum/10;
    

    return 0;
}

