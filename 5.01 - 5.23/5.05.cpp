#include <iostream>

using namespace std;

// Zadanie 5.05 Napisać 1argumentową funkcję, której argumentem jest łańcuch znaków s. Funkcja ma wyświetlać tekst z s w taki sposób, aby między każdymi dwoma znakami był znak podkreślenia (np. ALA A_L_A). Napisać program demonstrujący › działanie powyższej funkcji.

string SetUnderlineBetweenChars(string s)
{
    string result;

    for (char c: s)
    {
        result+=c;

        if (c == ' ')
            continue;
        
        result+= "_";
    }

    return result;
}

int main()
{
    string s = "Ala ma kota";

    s = SetUnderlineBetweenChars(s);

    cout << s;
    
    return 0;
}


