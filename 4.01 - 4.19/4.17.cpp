#include <iostream>
#include <stack>
#include <sstream>
#include <vector>

using namespace std;

// Zadanie 4.17 (*) Zaimplementować 4działaniowy kalkulator działający w notacji RPN (Odwrotna Notacja Polska). Potrzebny w tej implementacji stos zaimplementować w postaci tablicy.

double obliczRPN(vector<string> &tokens) {
    stack<double> stos;

    for (const string &token : tokens) {
        istringstream iss(token);
        double liczba;
        if (iss >> liczba) {
        } else {
            double operand2 = stos.top();
            stos.pop();
            double operand1 = stos.top();
            stos.pop();

            if (token == "+") {
                stos.push(operand1 + operand2);
            } else if (token == "-") {
                stos.push(operand1 - operand2);
            } else if (token == "*") {
                stos.push(operand1 * operand2);
            } else if (token == "/") {
                stos.push(operand1 / operand2);
            }
        }
    }

    return stos.top();
}

int main() {
    string wyrazenie;
    cout << "Podaj wyrazenie w notacji RPN (oddziel operatory i liczby spacjami): ";
    getline(cin, wyrazenie);

    istringstream iss(wyrazenie);
    vector<string> tokens;

    while (iss) {
        string token;
        iss >> token;
        if (!token.empty()) {
            tokens.push_back(token);
        }
    }

    double wynik = obliczRPN(tokens);
    cout << "Wynik obliczen w notacji RPN: " << wynik << endl;

    return 0;
}
