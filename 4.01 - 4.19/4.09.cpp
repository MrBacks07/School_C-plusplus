#include <iostream>
#include <math.h>

using namespace std;

// Zadanie 4.09 Napisać 2argumentową funkcję, której argumentami jest tablica liczb całkowitych, oraz liczba całkowita n określająca rozmiar tablicy. Funkcja ma pobierać od użytkownika (z klawiatury) n liczb całkowitych i umieścić je w kolejnych komórkach tablicy. Napisać program demonstrujący działanie powyższej funkcji.

void FillWithNums(int tablica[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Podaj wartosc dla elementu " << i+1 << ": ";
        cin >> tablica[i];
    }
}

int main()
{
    int tablica[10] = {2, 3, 12, 4, 7, 4, 2, -22, 123, 7794};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    FillWithNums(tablica, rozmiar);

    //Print Table elems

    for (int i = 0; i < rozmiar; i++)
    {
        cout << i+1 << ": " << tablica[i] << "\n";
    }
    
    
    return 0;
}


