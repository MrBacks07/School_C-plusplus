#include <iostream>

using namespace std;

// Zadanie 4.07 Napisać 2argumentową funkcję, której argumentami jest tablica liczb całkowitych, oraz liczba całkowita określająca rozmiar tablicy. Funkcja ma wypełniać tablicę kolejnymi liczbami parzystymi. Napisać program demonstrujący działanie powyższej funkcji.

void FillWithPairNumbers(int tablica[], int size)
{
    for (int i = 0; i < size; i++)
    {
        tablica[i] = i*2;
    }
}

int main()
{
    int tablica[10] = {2, 3, 12, 4, 7, 4, 2, -22, 123, 7794};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    FillWithPairNumbers(tablica, rozmiar);

    //Print Table elems

    for (int i = 0; i < rozmiar; i++)
    {
        cout << i+1 << ": " << tablica[i] << "\n";
    }
    
    
    return 0;
}


