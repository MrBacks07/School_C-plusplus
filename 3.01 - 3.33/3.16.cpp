#include <iostream>

using namespace std;

// Zadanie 3.16: Napisać dwuargumentową procedurę która zamienia wartości dwóch argumentów typu integer, tzn. jeżeli argumentami procedury są: x1=A i x2=B, to po jej zakończeniu powinno być x1=B i x2=A.

void zamienWartosci(int &x1, int &x2) {
    int temp = x1;
    x1 = x2;
    x2 = temp;
}

int main() 
{
    int A = 5;
    int B = 10;

    cout << "Przed zamianą:" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    zamienWartosci(A, B);

    cout << "Po zamianie:" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    return 0;
}

