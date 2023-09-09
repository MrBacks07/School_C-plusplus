#include <iostream>

using namespace std;

// Zadanie 2.26: Napisać program wczytujący z klawiatury liczbę całkowitą, a następnie wyświetlający informację, czy liczba ta jest większa od 100 i jednocześnie podzielna przez 10.

int main()
{
    int number;

    cout << "Podaj swoja liczbe: ";
    cin >> number;
    
    if (number > 100 && number % 10 == 0)
    {
        cout << "Twoja liczba jest wieksza od 100 oraz podzielna przez 10";
    }

    return 0;
}

