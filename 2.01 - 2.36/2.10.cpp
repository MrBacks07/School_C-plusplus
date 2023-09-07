#include <iostream>

using namespace std;

// Zadanie 2.10: Napisać program liczący silnię z liczby podanej przez użytkownika.


int silnia(int liczba)
{
    if (liczba < 2) 
    {
        return liczba;
    }
    return liczba * silnia(liczba - 1);
}

int main()
{
    int n;

    cout << "Podaj twoje N: ";
    cin >> n;

    cout << silnia(n) << "\n";

    return 0;
}

