#include <iostream>

using namespace std;

// Zadanie 3.25: Napisać 1-argumentową funkcję przeliczającą temperaturę w skali Fahrenheita na skalę Celsjusza według wzoru C=(5/9)(F-32). Zarówno argument, jak i zwracana wartość mają być typu real.

float ConvertFahrenheitToCelcius(float Fahrenheit)
{
    return (Fahrenheit-32)/1.8;
}

int main()
{
    cout << ConvertFahrenheitToCelcius(80);
    
    return 0;
}

