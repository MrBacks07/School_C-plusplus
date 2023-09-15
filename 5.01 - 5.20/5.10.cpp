#include <iostream>

using namespace std;

// Zadanie 5.10 Napisać 1argumentową funkcję, której argumentem jest łańcuch znaków s. Funkcja ma wyświetlać tekst z s „od końca”. Napisać program demonstrujący działanie powyższej funkcji.

void PrintReverseString(string &s)
{
    string result;
    for (int i = s.length(); i >= 0; i--)
    {
        result+= s[i];
    }

    cout << result;
    
}

int main()
{
    string s = "Ala ma kota";

    PrintReverseString(s);
    
    return 0;
}


