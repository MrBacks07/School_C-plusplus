#include <iostream>

using namespace std;

// Zadanie 5.14 Napisać 2argumentową funkcję, której argumentami są: łańcuch znaków s oraz zmienna znakowa c. Funkcja ma zwracać liczbę wystapień znaku c w łańcuchu s. Napisać program demonstrujący działanie powyższej funkcji.

int CharCounter(string &s, char c)
{
    int count = 0;
    
    for (char ch: s)
    {
        if (ch == c)
            count++;
    }

    
    return count;
}

int main()
{
    string s = "Ala ma kota";

    cout << CharCounter(s, 'k');
    
    return 0;
}


