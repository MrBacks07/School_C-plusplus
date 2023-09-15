#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Zadanie 6.03 Napisać program składający się z dwóch następujących funkcji:
// 1) Funkcja zapisująca do pliku tekstowego o nazwie ‘dane.txt’ 100 kolejnych liczb całkowitych.
// 2) Funkcja czytająca z pliku tekstowego o nazwie ‘dane.txt’ co drugą liczbę w nim zapisaną i obliczająca ich średnią.


void SaveFile()
{
    ofstream file;
    file.open ("dane.txt");
    for (int i = 1; i <= 100; i++)
    {
        file << i << "\n";
    }
     
    file.close();
}

void LoadFile()
{
    int sum = 0;
    string line;
    ifstream file ("dane.txt");

    if (!file.is_open())
        return;
        
    int count = 1;
    while(getline(file, line))
    {
        count++;
        if (count % 2 == 1)
            continue;
        sum += stoi(line);
    }

    cout << sum/50;
    file.close();
}

int main()
{
    SaveFile();
    LoadFile();

    system("pause");
    return 0;
}