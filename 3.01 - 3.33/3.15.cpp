#include <iostream>

using namespace std;

// Zadanie 3.15: Napisać dwuargumentową funkcje która zwraca mniejszy z podanych argumentów. Oba argumenty oraz zwracana wartość mają być typu integer.

int WhichIsLower(int value1, int value2)
{
    if (value1 < value2)
        return value1;
    else
        return value2;
}

int main()
{
    cout << WhichIsLower(2, 5);

    return 0;
}

