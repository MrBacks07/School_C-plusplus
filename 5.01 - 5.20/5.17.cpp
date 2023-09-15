#include <iostream>
#include <string>

using namespace std;

// Zadanie 5.17 (*) Znaleźć wszystkie pary liczb 2cyfrowych ‘ab’ i ‘cd’ takich, że rezultat działania ab/cd * abcd daje wynik będący palindromem. Przykład: 11/20 *1120 = 616.

bool IsPalindrom(string s)
{
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
            
        return false;
    }

    return true;
}

int main()
{
    for (int i = 10; i < 100; i++)
    {
        for (int j = 10; j < 100; j++)
        {
            string abcd = to_string(i) + to_string(j);
            if (IsPalindrom(to_string(int(float(i)/float(j) * stof(abcd)))))
                cout << int(float(i)/float(j) * stof(abcd)) << "\n"; 
        }
    }
    

    return 0;
}


