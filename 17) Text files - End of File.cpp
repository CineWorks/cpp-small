#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

float liczby[100];

int main()
{
    string linia;
    int nr_linii=1;

    fstream plik;
    plik.open("EOF.txt", ios::in);

    if(plik.good()==false)
    {
        cerr << "Plik nie istnieje!";
        exit(0);
    }

    int licznik=0;

    while (!plik.eof())
    {
        getline(plik, linia);
        liczby[licznik]=atof(linia.c_str());
        licznik++;
    }

    plik.close();
    plik.clear();

    cout<<"Ilosc pomiarow: "<<licznik<<endl<<endl;

    for (int i=0;i<licznik;i++)
    {
        cout<<liczby[i]<<endl;
    }
    return 0;
}
