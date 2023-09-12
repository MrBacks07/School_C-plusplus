#include <iostream>
#include <algorithm>

using namespace std;

// Zadanie 5.01 Napisać 1argumentową funkcję, której argumentem jest łańcuch znaków s. Funkcja ma usuwać wszystkie spacje z łańcucha s. Napisać program demonstrujący działanie powyższej funkcji.

void RemoveSpaces(string &s)
{
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
}

int main()
{
    string s = "Ala ma kota";

    RemoveSpaces(s);

    cout << s;
    
    return 0;
}


