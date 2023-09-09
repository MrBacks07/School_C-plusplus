#include <iostream>
#include <math.h>

using namespace std;

// Zadanie 3.23: Napisać dwuargumentową funkcję (argumenty x,y oraz zwracana wartość są typu real) zwracającą długość wektora (x,y). Długość wynosi L=sqrt(x2+y2).

float CalculateLengthVector(float x, float y)
{
    return sqrt(x*2+y*2);
}

int main()
{
    cout << CalculateLengthVector(2, 3);
    
    return 0;
}


