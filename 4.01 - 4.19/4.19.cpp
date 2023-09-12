#include <iostream>
#include <vector>

using namespace std;

// Zadanie 4.19 (**) Napisać program rozwiązujący metodą przeszukiwania siłowego problem tzw. Nkrólowych tzn. takiego sposobu ustawienia N królowych na szachownicy o boku N, aby się wzajemnie nie szachowały.

// Rozmiar szachownicy
const int N = 8;

bool IsQueenSafe(vector<vector<int>>& szachownica, int wiersz, int kolumna) {
    for (int i = 0; i < kolumna; i++) {
        if (szachownica[wiersz][i] == 1) {
            return false;
        }
    }

    for (int i = wiersz, j = kolumna; i >= 0 && j >= 0; i--, j--) {
        if (szachownica[i][j] == 1) {
            return false;
        }
    }

    for (int i = wiersz, j = kolumna; i < N && j >= 0; i++, j--) {
        if (szachownica[i][j] == 1) {
            return false;
        }
    }

    return true;
}

bool SolveProblem(vector<vector<int>>& szachownica, int kolumna) {
    if (kolumna >= N) {
        return true;
    }

    for (int i = 0; i < N; i++) {
        if (IsQueenSafe(szachownica, i, kolumna)) {
            szachownica[i][kolumna] = 1;

            if (SolveProblem(szachownica, kolumna + 1)) {
                return true;
            }

            szachownica[i][kolumna] = 0;
        }
    }

    return false;
}

int main() 
{
    vector<vector<int>> szachownica(N, vector<int>(N, 0));

    if (SolveProblem(szachownica, 0)) {
        // Wyświetl rozwiązanie
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << szachownica[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Nie znaleziono rozwiazania." << endl;
    }

    return 0;
}
