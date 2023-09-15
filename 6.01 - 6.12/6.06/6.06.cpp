#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Zadanie 6.06 Napisać program składający się z dwóch następujących funkcji:
// 1) Funkcja zapisująca do pliku binarnego o nazwie ‘dane.dat’ 10 kolejnych liczb rzeczywistych od 0.001 do 0.10 co 0.001.
// 2) Funkcja wyświetlająca na ekran wszystkie liczby rzeczywiste zapisane w pliku ‘dane.dat’.


void SaveFile()
{
    ofstream file;
    file.open("dane.dat");
    for (double i = 0.001; i <= 0.10; i+=0.001)
    {
        file << i << "\n";
    }
     
    file.close();
}

void LoadFile()
{
    string line;
    ifstream file ("dane.dat");
    if (!file.is_open())
        return;
        
    while(getline(file, line))
        cout << line << "\n";

    file.close();
}

int main()
{
    SaveFile();
    LoadFile();

    return 0;
}