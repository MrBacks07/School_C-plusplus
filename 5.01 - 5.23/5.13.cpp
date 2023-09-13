#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Zadanie 5.13 Napisać 1argumentową funkcję, której argumentem jest łańcuch znaków s. Funkcja ma zwrócić 1 jeżeli tekst w s zawiera tylko cyfry lub 0 w przeciwnym wypadku. Napisać program demonstrujący działanie powyższej funkcji.

int IsNumerical(string &s)
{
    for (char c: s)
    {
        if (isdigit(c) == 0)
            return 0;
    }


    return 1;    
}

int main()
{
    string s = "123456789";

    cout << IsNumerical(s);
    
    return 0;
}


