#include <iostream>
#include <string>

using namespace std;

// Zadanie 5.16 Napisać 2argumentową funkcję, której argumentami są łańcuchy znaków s1 i s2. Funkcja ma zwracać 1 jeżeli łańcuch s2 jest zawarty w łańcuchu s1, lub 0 w przeciwnym wypadku.

int IsStringInString(string &s1, string &s2)
{
    if (s1.find(s2) == string::npos)
        return 0;
    
    return 1;
}

int main()
{
    string s1 = "Ala ma kota";
    string s2 = "Ala";

    cout << IsStringInString(s1, s2);
    
    return 0;
}


