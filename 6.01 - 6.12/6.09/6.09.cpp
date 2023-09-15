#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Zadanie 6.09 Napisać program składający się z dwóch następujących funkcji:
// 1) Funkcja zapisująca do pliku binarnego o nazwie ‘dane.dat’ 10 pierwszych parzystych liczb całkowitych.
// 2) Funkcja wyświetlająca na ekran liczby całkowite z pliku binarnego ‘dane.dat’


void SaveFile()
{
    ofstream file;
    file.open("dane.dat");

    for (int i = 1, count = 0; count < 10; i++)
    {
        i++;

        if (i % 2 != 0)
            continue;

        file << i << "\n";

        count++;
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