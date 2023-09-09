#include <iostream>
#include <list>

using namespace std;

// Zadanie 3.31 (*): Mamy listę 1000 elementów (ponumerowanych od 1 do 1000). Wykreślamy co siódmy element (tzn. element nr 7, 14 itd.). Po dojściu do końca listy kontynuujemy od jej początku omijając elementy już wykreślone. Procedurę prowadzimy aż zostanie 10 ostanich elementów. Jakie to elementy? Napisać program rozwiązujący to zadanie.


int main()
{
    list<int> lista;

    for (int i = 1; i <= 1000; i++)
        lista.push_back(i);
    
    list<int>::iterator iterator = lista.begin();
    
    while (lista.size() > 10)
    {
        for (int i = 0; i < 6; i++)
        {
            iterator++;
            if (iterator == lista.end())
                iterator = lista.begin();
        }

        iterator = lista.erase(iterator);

        if (iterator == lista.end())
            iterator = lista.begin();
        
    }

    for (list<int>::iterator it = lista.begin(); it != lista.end(); it++)
        cout << *it << " ";
    
    
    return 0;
}


