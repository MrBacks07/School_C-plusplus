#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;

// Zadanie 3.33 (**) UWAGA!! Zadanie dla bardzo odważnych!: Na bezludnej wyspie mieszkają tylko dwa gatunki zwierząt – lisy i zające. Liczby zwierząt obu gatunków są od siebie zalezne i pozostają w równowadze. Np. zwiekszenie liczby zajęcy powoduje, że lisy mają więcej pożywienia i szybciej się mnożą. 
//Więcej lisów zjada zające, których liczba maleje – tym samym powodując zmniejszenie ilości pożywienia i spadek populacji lisów. Zachowanie takiego układu opisują tzw. równania różniczkowe Lotki-Volterry (http://www.personal.psu.edu/auk183/LotkaVolterra/LotkaVolterra1.html). Napisać program symulujący zachowanie się populacji lisów i zajęcy dla podanych przez użytkownika warunków początkowych. 
//Zastosować dowolny algorytm rozwiązywania równań różniczkowych.

int PossibleFox_Counter;
int Fox_Counter;
int Hare_Counter;

int Days_Counter;

bool haresDiesToday;
bool foxesDiesToday;

int ChancesToBorn;
int ChancesToDie;

void SetupSettings()
{
    cout << "Ustaw startowa ilosc lisow:";
    cin >> Fox_Counter;

    cout << "Ustaw startowa ilosc zajacow:";
    cin >> Hare_Counter;

    haresDiesToday = false;
    foxesDiesToday = false;
    PossibleFox_Counter = 0;
    Days_Counter = 1;

    system("cls");
}

bool RandomChance(int value)
{
    if (rand() % 101 < value)
        return true;
    
    return false;
}

int main()
{
    srand(time(NULL));
    int choice;

    cout << "Witaj w grze turowej. Przebieg rozgrywki jest zalezny od twoich ustawien na samym poczatku\n\n";

    cout << "Gra symuluje zycie lisow oraz zajacow na bezludnej wyspie, gdzie uzytkownik decyduje o parametrach startowych gry a potem moze analizowac jej przebieg\n";
    cout << "Wyslij cyfre 1 jesli chcesz przejsc dalej\n";
    cout << "Wybor:";
    cin >> choice;

    system("cls");

    if (choice == 1)
        SetupSettings();
    else
        exit(1);

    cout << "Wyslij cyfre 1 jesli chcesz zaczac gre\n";
    cout << "Wybor:";

    cin >> choice;

    system("cls");

    if (choice != 1)
        exit(1);
        

    cout << "                     ===> DZIEN 1 <===\n\n";
    cout << "Na bezludna wyspe zostalo zrzucone " << Fox_Counter << " lisow oraz " << Hare_Counter << " zajacow!\n";
    cout << "Dzien 1 jest spokojny zwierzeta zaczely oswajac sie z nowym srodowiskiem.\n\n";
    cout << "Wyslij 1 jesli chcesz przejsc do nastepnego dnia\n";
    cout << "Wybor:";
    cin >> choice;
    system("cls");

    if (choice != 1)
        exit(1);
    
    Days_Counter++;

    while (true)
    {
        haresDiesToday = false;
        foxesDiesToday = false;

        if (Hare_Counter < Fox_Counter/2)
            ChancesToDie = 40;
        else if (Hare_Counter < Fox_Counter/3)
            ChancesToDie = 50;
        else
            ChancesToDie = 20;
        
        if (Fox_Counter < Hare_Counter)
            ChancesToBorn = 40;
        else
            ChancesToBorn = 10;

        cout << "                     ===> DZIEN " << Days_Counter << " <===\n\n";
        
        cout << "Wydarzenia dzisiejszego dnia:\n";
        for (int i = 1; i <= Fox_Counter; i++)
        {
            if (!RandomChance(30) && Hare_Counter > 1)
                continue;

            if (Hare_Counter < 2)
            {
                if (RandomChance(50))
                {
                    cout << "- Lis zmarl z glodu\n";
                    Fox_Counter--;
                    if (Fox_Counter < 1)
                        foxesDiesToday = true;
                }
            }

            if (!RandomChance(20))
            {

                if (RandomChance(ChancesToDie))
                {
                    cout << "- Lis zmarl z glodu\n";
                    Fox_Counter--;
                    if (Fox_Counter < 1)
                        foxesDiesToday = true;
                    continue;
                }
                
                if (PossibleFox_Counter < 1)
                    continue;
                
                if (RandomChance(ChancesToBorn))
                {
                    cout << "- Urodzil sie nowy Lis\n";
                    Fox_Counter++;
                    PossibleFox_Counter--;
                    continue;
                }
                
            }
            
            if (Hare_Counter < 1)
                break;

            PossibleFox_Counter++;
            Hare_Counter--;

            if (Hare_Counter < 1)
                haresDiesToday = true;

            cout << "- Lis zjadl zajaca\n";
        }


        cout << "\n\nPodsumowanie tego dnia:\n";
        cout << "- Zyje aktualnie - " << Fox_Counter << " lisow\n";
        cout << "- Zyje aktualnie - " << Hare_Counter << " zajacow\n";
        if (haresDiesToday)
            cout << "- Dzisiejszego dnia zmarly wszystkie zajace!";
        if (foxesDiesToday)
        {
            cout << "- Dzisiejszego dnia zmarly wszystkie lisy co powoduje koniec zycia na bezludnej wyspie!\n\n";
            cout << "Twoje srodowisko przetrwalo do " << Days_Counter << " dnia.\n\n";
            cout << "\n\nWyslij 1 jesli chcesz zaczac od nowa\n";
            cout << "Wybor:";
            cin >> choice;
            
            if (choice != 1)
                exit(1);

            system("cls");
            SetupSettings();

            cout << "                     ===> DZIEN 1 <===\n\n";
            cout << "Na bezludna wyspe zostalo zrzucone " << Fox_Counter << " lisow oraz " << Hare_Counter << " zajacow!\n";
            cout << "Dzien 1 jest spokojny zwierzeta zaczely oswajac sie z nowym srodowiskiem.\n\n";
            cout << "Wyslij 1 jesli chcesz przejsc do nastepnego dnia\n";
            cout << "Wybor:";
            cin >> choice;
            system("cls");

            if (choice != 1)
                exit(1);
            
            continue;

        }

        cout << "\n\nWyslij 1 jesli chcesz przejsc do nastepnego dnia\n";
        cout << "Wybor:";
        cin >> choice;

        if (choice != 1)
            exit(1);

        Days_Counter++;
        system("cls");
    }



    
    return 0;
}



