#include <iostream>
#include <vector>

using namespace std;

// Zadanie 3.30 (*): Napisać program wyszukujący liczby pierwsze w zakresie od 1 do 10 000 metodą sita Eratostenesa.

void sitoEratostenesa(int n) {
    vector<bool> jestPierwsza(n + 1, true);

    jestPierwsza[0] = jestPierwsza[1] = false;

    for (int i = 2; i * i <= n; ++i) {
        if (jestPierwsza[i]) {
            for (int j = i * i; j <= n; j += i) {
                jestPierwsza[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; ++i) {
        if (jestPierwsza[i]) {
            cout << i << " ";
        }
    }
}

int main() {
    int zakres = 10000;
    cout << "Liczby pierwsze w zakresie od 1 do " << zakres << " to:\n";
    sitoEratostenesa(zakres);
    cout << "\n";


    return 0;
}
