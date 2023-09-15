#include <iostream>
#include <string>

using namespace std;

// Zadanie 5.20 (*) Znaleźć wszystkie 3cyfrowe liczby pierwsze, dla których wszystkie permutacje ich cyfr są również liczbami pierwszymi.

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

int GetPremutation(int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
    {
        result*=i;
    }
    
    return result;
}

int main()
{
    string num_number;

    for (int i = 100; i < 1000; i++)
    {
        if (!IsPrime(i))
            continue;

        num_number = to_string(i);

        if (!IsPrime(GetPremutation((int)num_number[0] - 48)))
            continue;

        if (!IsPrime(GetPremutation((int)num_number[0] - 48)))
            continue;

        if (!IsPrime(GetPremutation((int)num_number[0] - 48)))
            continue;
        
        cout << i << "\n";
    }
    
    return 0;
}