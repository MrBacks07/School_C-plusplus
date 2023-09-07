#include <iostream>

using namespace std;

// Zadanie 2.06: Napisać program obliczający sumę S=S+(1/(2*n+1)) dla n=0 do N (N podane przez użytkownika).

int main()
{
    int n;
    int total;

    cout << "Podaj twoje N: ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        total = total+(1/(2*i+1));
        cout << "Dla N=" << i << " suma wynosi - " << total << "\n";
    }
    

    return 0;
}

