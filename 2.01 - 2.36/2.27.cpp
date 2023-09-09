#include <iostream>

using namespace std;

// Zadanie 2.27: Napisać program wczytujący z klawiatury liczbę całkowitą, a następnie wyświetlający informację, czy liczba ta jest jednocześnie podzielna przez 2 i przez 3. 

int main()
{
    int number;

    cout << "Podaj swoja liczbe: ";
    cin >> number;
    
    if (number % 2 == 0 && number % 3 == 0)
    {
        cout << "Twoja liczba jest podzielna przez 3 oraz 2";
    }

    return 0;
}

