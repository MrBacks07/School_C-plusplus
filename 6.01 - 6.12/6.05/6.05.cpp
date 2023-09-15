#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Zadanie 6.05 Napisać program składający się z dwóch następujących funkcji:
// 1) Funkcja zapisująca do pliku tekstowego o nazwie ‘dane.txt’ n kolejnych liczb całkowitych (n jest argumentem funkcji)
// 2) Funkcja wyświetlająca wszystkie liczby zapisane w pliku ‘dane.txt’.


void SaveFile(int n)
{
    ofstream file;
    file.open("dane.txt");
    for (int i = 1; i <= n; i++)
    {
        file << i << "\n";
    }
     
    file.close();
}

void LoadFile()
{
    string line;
    ifstream file ("dane.txt");
    if (!file.is_open())
        return;
        
    while(getline(file, line))
        cout << line << "\n";

    file.close();
}

int main()
{
    SaveFile(500);
    LoadFile();

    return 0;
}