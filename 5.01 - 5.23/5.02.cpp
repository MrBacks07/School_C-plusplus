#include <iostream>

using namespace std;

// Zadanie 5.02 Napisać 1argumentową funkcję, której argumentem jest łańcuch znaków s. Funkcja ma zwracać liczbe wystąpień litery 'a' w łańcuchu s. Napisać program demonstrujący działanie powyższej funkcji.

int CounterA(string s)
{
    int count = 0;
    for (char c: s)
    {
        if (c != 'a' && c != 'A')
            continue;

        count++;
    }

    return count;
}

int main()
{
    cout << "Wystapienia litery 'a' w slowie 'Ala ma kota' => " << CounterA("Ala ma kota");
    
    return 0;
}


