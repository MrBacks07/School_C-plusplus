#include <iostream>
#include <sstream>

using namespace std;

// Zadanie 5.09 Napisać 1argumentową funkcję, której argumentem jest łańcuch znaków s. Funkcja ma zwracać z ilu wyrazów składa się tekst w s. Napisać program demonstrujący działanie powyższej funkcji.

int CountWord(string &s)
{
    stringstream ss(s);
    string word;
    int count = 0;

    while (ss >> word)
    {
        count++;
    }

    return count;
}

int main()
{
    string s = "Ala ma kota";

    cout << CountWord(s);
    
    return 0;
}


