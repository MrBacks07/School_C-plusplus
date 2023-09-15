#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Zadanie 6.01 Napisać program składający się z dwóch następujących funkcji:
// 1) Funkcja zapisująca do pliku tekstowego o nazwie ‘dane.txt’ 20 kolejnych liczb całkowitych.
// 2) Funkcja czytająca z pliku tekstowego o nazwie ‘dane.txt’ 20 kolejnych liczb całkowitych i zwracająca ich średnią.


void SaveFile()
{
    ofstream file;
    file.open ("dane.txt");
    for (int i = 1; i <= 20; i++)
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
        
    while(getline(file, line))
        sum += stoi(line);

    file.close();

    cout << sum/20 << endl;
}

int main()
{
    SaveFile();
    LoadFile();

    system("pause");
    return 0;
}