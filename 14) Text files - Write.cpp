#include <iostream>
#include <fstream>

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    cout << "Podaj imie" << endl;                      cin >> imie;
    cout << "Podaj nazwisko" << endl;               cin >> nazwisko;
    cout << "Podaj numer telefonu" << endl;      cin >> nr_tel;

    fstream plik;
    plik.open("Wizytowka.txt", ios::out | ios::app);

    plik<<imie<<endl;
    plik<<nazwisko<<endl;
    plik<<nr_tel<<endl;

    plik.close();
    plik.clear();


    return 0;
}
