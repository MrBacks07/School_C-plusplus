#include <iostream>
#include <string>

using namespace std;

// Zadanie 5.19 (*) Znaleźć wszystkie liczby pierwsze w zakresie 30 do 30000 takie, że zarówno suma, jak i iloczyn ich cyfr są również liczbami pierwszymi.

bool IsPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int DigitSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int DigitProduct(int n)
{
    int product = 1;
    while (n > 0)
    {
        product *= n % 10;
        n /= 10;
    }
    return product;
}

bool IsPrimeNumber(int n)
{
    return IsPrime(n) && IsPrime(DigitSum(n)) && IsPrime(DigitProduct(n));
}

int main()
{
    for (int i = 30; i <= 30000; i++)
    {
        if (IsPrimeNumber(i))
            cout << i << "\n";
    }

    return 0;
}
