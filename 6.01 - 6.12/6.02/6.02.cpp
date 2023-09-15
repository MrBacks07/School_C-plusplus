#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Zadanie 6.02 Napisać program składający się z dwóch następujących funkcji:
// 1) Funkcja zapisująca do pliku binarnego o nazwie ‘dane.dat’ 10 kolejnych potęg liczby 2.
// 2) Funkcja czytająca z pliku binarnego o nazwie ‘dane.dat’ 10 kolejnych liczb całkowitych i zwracająca ich sumę.


void SaveFile()
{
    ofstream file;
    file.open ("dane.dat");
    for (int i = 1; i <= 10; i++)
    {
        file << i*i << "\n";
    }
     
    file.close();
}

void LoadFile()
{
    int sum = 0;
    string line;
    ifstream file ("dane.dat");
    if (!file.is_open())
        return;
        
    while(getline(file, line))
        sum += stoi(line);

    file.close();

    cout << sum;

}

int main()
{
    SaveFile();
    LoadFile();

    system("pause");
    return 0;
}