#include <iostream>

using namespace std;

string PIN;                                                                     // C++ w deklaracji zmiennych INT traktuje wszystkie wpisane liczby jako liczby (well done capt'n!). Aby uniknac takich przypadkow, ...
                                                                                            // ... gdzie 0333 jest traktowane jako 333 (co nie jest 4 cyfrowym kodem), zmieniamy deklaracje liczb na deklaracje symboli
int main()                                                                        // dlatego wpisujemy typ zmiennych STRING (ciag znakow)
{
    cout << "Witaj w programie!" << endl;
    cout << "Podaj numer PIN" <<endl;
    cin >> PIN;

    if (PIN=="3333")                                                    // Pojedynczy znak rownosci to operator przypisania. Jest to instrukcja, ktorej uzywamy, kiedy chcemy nadac zmiennej jakas wartosc.
    {                                                                                     // W przypadku, gdy chcemy porownac dwie wartosci, wpisujemy dwa znaki rownania.
                cout << "PIN zgodny!";                           // Wewnatrz tych klamr ( "{" oraz "}" ) wpisujemy, co ma sie wydarzyc, jesli warunek w nawiasie obok "if" jest prawda
    }
    else                                                                              // Tutaj zamiast else mozna podac drugiego IF'a, wpisujac przewidywana inna zaleznosc. Else to komenda do funkcji, ktora mowi ...
    {                                                                                      // ... "w przypadku przeciwnym do IF". Pojedyncze IF oraz ELSE to funkcja wykonujaca podstawowy test PRAWDA i FALSZ.
                cout << "Zly kod PIN!";                            // Wewnatrz tych klamr ( "{" oraz "}" ) wpisujemy, co ma sie wydarzyc, jesli warunek w nawiasie obok "if" jest NIEPRAWDA (falszem)
    }

    return 0;
}
