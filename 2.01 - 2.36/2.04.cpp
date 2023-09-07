#include <iostream>

using namespace std;

/*
Zadanie 2.04: Napisać program obliczający sumę S=S+(1/(2*n-1)) dla n=0 do N (N podane przez użytkownika).
*/

int main()
{
    int n;

    cout << "Podaj twoje N: ";
    cin >> n;

    for (int i=0; i <= n; i++)
    {
        cout << "\nDla n=" << i << " suma wynosi - " << 1/(2*i-1);
    }
    

    return 0;
}

