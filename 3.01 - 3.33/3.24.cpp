#include <iostream>
#include <math.h>

using namespace std;

// Zadanie 3.24: Napisać jednoargumentową funkcję której argumentem jest 3-elementowa tablica typu real. Funkcja ma zwracać długość wektora którego współrzędne zapisane są w tablicy, tzn. Jeżeli w tablicy są liczby A, B i C, to długość wektora wynosi L=sqrt(A2+B2+C2).

float CalculateLengthVector(float tablica[2])
{
    return sqrt(tablica[0]*2+tablica[1]*2+tablica[2]*2);
}

int main()
{
    float tablica[] = {1.23, 0.2, 24.55};

    cout << CalculateLengthVector(tablica);
    
    return 0;
}

