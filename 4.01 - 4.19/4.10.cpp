#include <iostream>
#include <math.h>

using namespace std;

// Zadanie 4.10 Napisać 2argumentową funkcję, której argumentami jest tablica liczb całkowitych, oraz liczba całkowita określająca rozmiar tablicy. Funkcja ma zwracać średnią liczb z tablicy. Napisać program demonstrujący działanie powyższej funkcji.

int sum;

int GetAverrageNum(int tablica[], int size)
{
    sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += tablica[i];
    }
    return sum/size;
}

int main()
{
    int tablica[10] = {2, 3, 12, 4, 7, 4, 2, -22, 123, 7794};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    cout << GetAverrageNum(tablica, rozmiar);
    
    return 0;
}


