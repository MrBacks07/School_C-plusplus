#include <iostream>

using namespace std;

// Zadanie 2.11: Napisać program liczący sumę liczb całkowitych 1+2+3+..+N. Dla N podanego przez użytkownika.

int main()
{
    int n;
    int total = 0;

    while (true)
    {
        cout << "Podaj liczbe ktora chcesz dodac do sumy: ";
        cin >> n;

        total += n;

        cout << "Twoja suma wynosi - " << total << "\n";
    }
    

    return 0;
}

