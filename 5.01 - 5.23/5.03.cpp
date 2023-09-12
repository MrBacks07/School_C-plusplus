#include <iostream>

using namespace std;

// Zadanie 5.03 Napisać 1argumentową funkcję, której argumentem jest łańcuch znaków s. Przyjmując, że zmienna s zawiera prawidłowy PESEL, wyświetlić zawartą w nim datę urodzenia w formacie DD/MM/RR. Napisać program demonstrujący działanie powyższej funkcji.

void ViewDate(string s)
{
    string day, month, year;

    year = s.substr(0, 2);
    month = s.substr(2, 2);
    day = s.substr(4, 2);

    cout << day << "/" << month << "/" << year;


}

int main()
{
    //Pesel dla demonstracji zostal wyciagniety z generatora
    ViewDate("97082165839");
    
    return 0;
}


