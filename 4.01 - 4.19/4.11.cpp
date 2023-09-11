#include <iostream>
#include <math.h>

using namespace std;

// Zadanie 4.11 Napisać 4argumentową funkcję, której argumentami są trzy tablice liczb całkowitych reprezentujące wektory a,b, c, oraz liczba n określająca rozmiar wektorów. Funkcja ma realizować dodawanie wektorów a i b a wynik umieścić w wektorze c (sumę wektorów oblicza się według zasady: ity element sumy jest sumą itych elementów dodawanych wektorów). Napisać program demonstrujący działanie powyższej funkcji.


void AddVectors(int tabA[], int tabB[], int tabC[], int size)
{
    for (int i = 0; i < size; i++)
    {
        tabC[i] = tabA[i] + tabB[i];
    }
}

int main()
{
    int tabA[10] = {2, 23, 12, 4, 7, 4, 2, -22, 123, 7794};
    int tabB[10] = {44, 32, 11, 24, 88, 4, 3, 12, 22, 4543};
    int tabC[10];

    int rozmiar = sizeof(tabC) / sizeof(tabC[0]);

    AddVectors(tabA, tabB, tabC, rozmiar);
    
    return 0;
}


