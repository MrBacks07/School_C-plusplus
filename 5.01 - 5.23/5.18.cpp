#include <iostream>
#include <string>
#include <math.h>

using namespace std;

// Zadanie 5.18 (*) Znaleźć wszystkie 4cyfrowe liczby całkowite ‘abcd’ dla których spełnione jest równanie: (ab+cd)^2=abcd.

int main()
{
    string num_string;
    string firsthalf;
    string secondhalf;

    for (int i = 1000; i < 10000; i++)
    {
        num_string = to_string(i);

        firsthalf = num_string.substr(0, num_string.length()/2);
        secondhalf = num_string.substr(2, num_string.length()/2);
        if (i == pow((stoi(firsthalf)+stoi(secondhalf)), 2))
            cout << "ABCD: " << i << " " << pow((stoi(firsthalf)+stoi(secondhalf)), 2) << "\n";
    }
    
    
    return 0;
}


