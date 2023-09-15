#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Zadanie 6.10 Napisać program składający się z dwóch następujących funkcji:
// 1) Funkcja zapisująca do pliku tekstowego o nazwie ‘dane.txt’ 20 kolejnych liczb całkowitych.
// 2) Funkcja wyświetlająca sumy każdych dwóch kolejnych liczb zapisanych w pliku tekstowym ‘dane.txt’.


void SaveFile()
{
    ofstream file;
    file.open("dane.txt");
    for (int i = 1; i <= 20; i++)
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

int main()
{
    SaveFile();
    LoadFile();

    return 0;
}