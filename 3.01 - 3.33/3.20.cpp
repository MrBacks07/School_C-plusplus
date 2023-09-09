#include <iostream>

using namespace std;

// Zadanie 3.20: Napisać jednoargumentową funkcję (argument typu całkowitego) która zwraca 1 jeżeli argument jest liczbą pierwszą, lub 0 gdy nie jest. Uwaga: liczba pierwsza to liczba podzielna tylko przez 1 i samą siebie.

int IsPrimeNumber(int number)
{
    int is_Prime = 1;

    if (number == 0 || number == 1)
        is_Prime = 0;

    if (number == 2 || number == 3)
        is_Prime = 1;
    
    if (number % 2 == 0 || number % 3 == 0)
        is_Prime = 0;

    return is_Prime;
}

int main()
{

    int result = IsPrimeNumber(61);

    cout << result;
    
    return 0;
}
