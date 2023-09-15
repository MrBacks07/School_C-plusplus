#include <iostream>
#include <algorithm>

using namespace std;

// Zadanie 5.04 Napisać 1argumentową funkcję, której argumentem jest łańcuch znaków s. Funkcja ma zamieniać wszystkie małe litery w s na wielkie litery. Napisać program demonstrujący działanie powyższej funkcji.

void ChangeToUpper(string &s)
{
    transform(s.begin(), s.end(), s.begin(), static_cast<int(*)(int)>(std::toupper));
}

int main()
{
    string s = "Ala ma kota";

    ChangeToUpper(s);

    cout << s;
    
    return 0;
}


