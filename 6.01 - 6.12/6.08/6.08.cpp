#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Zadanie 6.08 Napisać program składający się z dwóch następujących funkcji:
// 1) Funkcja zapisująca do pliku binarnego o nazwie ‘dane.dat’ 10 liczb całkowitych podanych przez użytkownika
// 2) Funkcja wyświetlająca na ekran średnią z liczb zapisanych w pliku binarnym ‘dane.dat’.


void SaveFile()
{
    ofstream file;
    int number;
    file.open("dane.dat");
    for (int i = 1; i <= 10; i++)
    {
        cin >> number;
        file << number << "\n";
    }
     
    file.close();
}

void LoadFile()
{
    string line;
    ifstream file ("dane.dat");
    if (!file.is_open())
        return;
        
    int sum = 0;
    while(getline(file, line))
        sum += stoi(line);
    file.close();

    cout << sum/10;
}

int main()
{
    SaveFile();
    LoadFile();

    return 0;
}