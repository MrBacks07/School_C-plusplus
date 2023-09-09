#include <iostream>
#include <math.h>

using namespace std;

// Zadanie 3.13: Napisać dwuargumentową funkcje która podnosi argument pierwszy do potęgi określonej przez argument drugi. Pierwszy argument ma byc typu real, a drugi integer (założyć, że zawsze będzie większy od 0). Funkcja ma zwracać wartość typu real.

float RaiseToThePowerOf(float value, int PowerOf)
{
    if (PowerOf < 1)
    {
        cout << "Potega musi wynosic minimum 1";
        return 0.0f;
    }
    return pow(value, PowerOf);
}

int main()
{
    cout << RaiseToThePowerOf(5.4323, 5);

    return 0;
}

