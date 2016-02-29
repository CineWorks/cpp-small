#include <iostream>

using namespace std;

float ocena[5];
int suma, srednia;                         // float - floating point (zmienny przecinek)
                                        // 5 zarezerwowanych komorek, czyli od 0 do 4 [0,1,2,3,4]
int main()
{
    for (int i=0; i<5; i++)
    {
    cout << "Podaj " << i+1 <<" ocene: ";       // i+1 poniewaz bedzie normalnie odliczac od 0 do 4. Bardziej czytelne byloby, gdyby zaczynal od 1 do 5
    cin >> ocena[i];
    suma += ocena[i];                           // CIEKAWOSTKA: "+=" można dzieki temu zastapic pisanie x=x+y kodem x+=y.
    }
    cout << endl;
    cout << "Suma ocen: " << suma << endl;
    srednia = suma / 5;                         // niestety, "i" w kodzie nie ma przypisanej liczby, wiec wyskoczy blad. Wartosc "i" bedzie przypisane dopiero w programie.
    cout << "Srednia ocen: " << srednia << endl;
    return 0;
}
