#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Zadanie 6.11 (*) Napisać program „notes z telefonami”. Program powinien przechowywać rekordy z następującymi informacjami: imię, nazwisko, numer telefonu. Pomiędzy uruchomieniami programu dane należy przechowywać w pliku.
// Program powinien umożliwiać dodawanie, usuwanie oraz szukanie rekordów na podstawie nazwiska.


void SaveFile(string firstname, string lastname, string phone)
{
    ofstream file("dane.txt", ios::app);

    file << "Imie: " << firstname << " Nazwisko: " << lastname << " Numer telefonu: " << phone << "\n";
    file.close();
}

void LoadFile()
{
    string line;
    ifstream file ("dane.txt");

    if (!file.is_open())
        return;
    
    int sum=0;
    int counter=0;
    while(getline(file, line))
    {
        if (counter == 2)
        {
            cout << sum << "\n";
            counter = 0, sum = 0;
        }
        sum+=stoi(line);
        counter++;
    }

    file.close();
}

void RemoveRecord(string lastname)
{
    string line;

    ofstream tempFile("temp.txt");
    ifstream mainFile("dane.txt");
    
    while (getline(mainFile, line))
    {
        if (line.find(lastname) == string::npos)
            tempFile << line << "\n";
    }

    tempFile.close();
    mainFile.close();

    remove("dane.txt");
    rename("temp.txt", "dane.txt");
}

void ReadInfo(string lastname)
{
    string line;

    ifstream mainFile("dane.txt");

    while (getline(mainFile, line))
    {
        if (line.find(lastname) != string::npos)
            cout << "\n" << line << "\n\n";
    }
}

void SelectAction()
{
    int choice;

    cout << "Wybierz co chcesz zrobic\n1 - Dodaj nowy rekord\n2 - Usun rekord\n3 - Wyszukaj rekord na podstawie nazwiska\nWybor: ";
    cin >> choice;

    switch (choice)
    {
        case 0:
        {
            break;
        }
        case 1:
        {
            string firstname;
            string lastname;
            string phone;
            cout << "Imie: ";
            cin >> firstname;
            cout << "Nazwisko: ";
            cin >> lastname;
            cout << "Numer telefonu: ";
            cin >> phone;

            SaveFile(firstname, lastname, phone);

            cout << "Poprawnie dodales do notesu " << firstname << " " << lastname << " " << phone << " ";
            
            SelectAction();
            break;
        }
        case 2:
        {
            string lastname;
            cout << "Podaj nazwisko osoby ktora chcesz usunac: ";
            cin >> lastname;

            RemoveRecord(lastname);
            cout << "Poprawnie usunales " << lastname << " z notesu";
            SelectAction();
            break;
        }
        case 3:
        {
            string lastname;
            cout << "Podaj nazwisko osoby o ktorej chcesz sie dowiedziec: ";
            cin >> lastname;

            ReadInfo(lastname);

            SelectAction();
            break;
        }
        default:
        {
            cout << "Jedne mozliwosc to 0 1 2 3, upewnij sie ze wybrales ktoras z tych opcji i sprobuj ponownie\n\n";
            SelectAction();
            break;
        }
    }
}

int main()
{
    cout << "Witaj w notesie z telefonami!\n\n";

    SelectAction();

    return 0;
}