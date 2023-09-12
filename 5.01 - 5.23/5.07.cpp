#include <iostream>

using namespace std;

// Zadanie 5.07 Napisać 1argumentową funkcję, której argumentem jest łańcuch znaków s. Funkcja ma zamieniać wszystkie spacje na znak podkreślenia '_'. Napisać program demonstrujący działanie powyższej funkcji.

void ChangeSpace(string &s)
{
    for (char &c: s)
        if (c == ' ')
            c = '_';
}

int main()
{
    string s = "Ala ma kota";

    ChangeSpace(s);

    cout << s;
    
    return 0;
}


