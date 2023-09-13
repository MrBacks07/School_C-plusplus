#include <iostream>

using namespace std;

// Zadanie 5.15 Napisać 3argumentową funkcję, której argumentami są: łańcuch znaków s, oraz dwie zmienne znakowe c1 i c2. Funkcja ma zastępować w tekście s wszystkie wystąpienia znaku c1 znakiem c2. Napisać program demonstrujący działanie powyższej funkcji.

void ChangeCharInString(string &s, char c1, char c2)
{
    for (char &c: s)
    {
        if (c == c1)
            c = c2;
    }
}

int main()
{
    string s = "Ala ma kota";

    ChangeCharInString(s, 'a', 'd');

    cout << s;
    
    return 0;
}


