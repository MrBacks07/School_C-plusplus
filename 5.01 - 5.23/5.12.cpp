#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Zadanie 5.12 Napisać 1argumentową funkcję, której argumentem jest łańcuch znaków s. Funkcja ma zwrócić 1 jeżeli tekst w s jest palindromem lub 0 jeżeli nie jest. Napisać program demonstrujący działanie powyższej funkcji.

int IsPalindrom(string &s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int length = s.length();
    for (int i = 0, j = length-1; i < length; i++, j--)
    {
        if (s[i] == s[j])
            continue;
            
        if (s[i] == ' ')
        {
            i++;
            continue;
        }
        else if (s[j] == ' ')
        {
            j--;
            continue;
        }
            
        return 0;
    }
    

    return 1;
}

int main()
{
    string s = "Kobyla ma maly bok";

    cout << IsPalindrom(s);
    
    return 0;
}


