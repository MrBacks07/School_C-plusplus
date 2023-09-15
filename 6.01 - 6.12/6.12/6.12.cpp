#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Zadanie 6.12 (*) Napisać program „katalog książek”. Program powinien przechowywać rekordy z następującymi informacjami: autor, tytuł. 
// Pomiędzy uruchomieniami programu dane należy przechowywać w pliku.
// Program powinien umożliwiać dodawanie, usuwanie oraz szukanie rekordów na podstawie autora lub tytułu (również na podstawie fragmentu nazwiska autora lub tytułu ksiązki).


void SaveFile(string author, string title)
{
    ofstream file("dane.txt", ios::app);

    file << "Autor: " << author;
    file << " Tytul: " << title << "\n";
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

void RemoveRecord(string author_title)
{
    string line;

    ofstream tempFile("temp.txt");
    ifstream mainFile("dane.txt");
    
    while (getline(mainFile, line))
    {
        if (line.find(author_title) == string::npos)
            tempFile << line << "\n";
    }

    tempFile.close();
    mainFile.close();

    remove("dane.txt");
    rename("temp.txt", "dane.txt");
}

void ReadInfo(string author_title)
{
    string line;

    ifstream mainFile("dane.txt");

    while (getline(mainFile, line))
    {
        if (line.find(author_title) != string::npos)
            cout << "\n" << line << "\n\n";
    }
    mainFile.close();
}

void SelectAction()
{
    int choice;

    cout << "Wybierz co chcesz zrobic\n1 - Dodaj nowy rekord\n2 - Usun rekord\n3 - Wyszukaj rekord na podstawie autora lub tytulu\nWybor: ";
    cin >> choice;

    switch (choice)
    {
        case 0:
        {
            break;
        }
        case 1:
        {
            string author;
            string title;

            cout << "Autor: ";
            cin.ignore();
            getline(cin, author);
            cout << "Tytul: ";
            getline(cin, title);

            SaveFile(author, title);

            cout << author;
            cout << title;
            cout << "\nPoprawnie dodales do notesu " << author << " " << title << " ";
            
            SelectAction();
            break;
        }
        case 2:
        {
            string author_title;
            cout << "Podaj autora/tytul ksiazki ktora chcesz usunac: ";
            cin >> author_title;

            RemoveRecord(author_title);
            cout << "Poprawnie usunales " << author_title << " z notesu";
            SelectAction();
            break;
        }
        case 3:
        {
            string author_title;
            cout << "Podaj autora/tytul ksiazki o ktorej chcesz sie dowiedziec: ";
            cin >> author_title;

            ReadInfo(author_title);

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
    cout << "Witaj w notesie z ksiazkami!\n\n";

    SelectAction();

    return 0;
}