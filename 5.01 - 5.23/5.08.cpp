#include <iostream>
#include <sstream>

using namespace std;

// Zadanie 5.08 Napisać 1argumentową funkcję, której argumentem jest łańcuch znaków s. Funkcja ma wyświetlać tekst w taki sposób, aby każdy wyraz był w nowej linii. Napisać program demonstrujący działanie powyższej funkcji.

void NewLineAfterWord(string &s)
{
    stringstream ss(s);
    string word;

    while (ss >> word)
        cout << word << endl;
}

int main()
{
    string s = "Ala ma kota";

    NewLineAfterWord(s);
    
    return 0;
}


