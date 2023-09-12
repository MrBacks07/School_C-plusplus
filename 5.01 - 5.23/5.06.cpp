#include <iostream>

using namespace std;

// Zadanie 5.06 Napisać 1argumentową funkcję, której argumentem jest łańcuch znaków s. Funkcja ma wyświetlać tekst z s w taki sposób, aby każda kolejna litera była w nowej linii. Napisać program demonstrujący działanie powyższej funkcji.

void ViewInNewLines(string &s)
{
    for (char c: s)
    {
        cout << c << "\n";
    }
}

int main()
{
    string s = "Ala ma kota";

    ViewInNewLines(s);
    
    return 0;
}


