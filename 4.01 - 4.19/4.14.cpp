#include <iostream>
#include <math.h>

using namespace std;

// Zadanie 4.14 Napisać 2argumentową funkcje, której argumentami są tablice a i b reprezentujące 3wymiarowe wektory. Funkcja ma zwracać iloczyn skalarny wektorów a i b. Napisać program demonstrujący działanie powyższej funkcji.

int IloczynSkalarny(int tabA[], int tabB[])
{
    //Nie zgadza mi sie jedna rzecz w tresci wiec to jest jeszcze do wyjasnienia
}

int main()
{
    int tabA[10] = {2, 3, 12, 4, 7, 4, 2, -22, 123, 7794};
    int tabB[10] = {3, 1, 15, 8, 22, 4, 4, -1, 25, 23};
    int sizeA = sizeof(tabA) / sizeof(tabA[0]);
    int sizeB = sizeof(tabB) / sizeof(tabB[0]);

    cout << IloczynSkalarny(tabA, tabB);
    
    return 0;
}


