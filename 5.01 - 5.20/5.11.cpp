#include <iostream>
#include <string>

using namespace std;

// Zadanie 5.11 Napisać 1argumentową funkcję, której argumentem jest łańcuch znaków s. Funkcja ma wczytać z klawiatury tekst s1 i zwrócić 1 jeżeli teksty s i s1 są takie same lub 0 w przeciwnym wypadku. Napisać program demonstrujący działanie powyższej funkcji.

int IsSameString(string &s)
{
    string s1;
    cout << "Podaj swojego stringa: ";
    getline(cin, s1);

    if (s == s1)
        return 1;

    return 0;
}

int main()
{
    string s = "Ala ma kota";

    cout << IsSameString(s);
    
    return 0;
}


