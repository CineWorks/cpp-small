#include <iostream>

using namespace std;

float metry; // metry - zmienna globalna

float ile_cali(float m);
float ile_jardow(float m);
void ile_mil(float m);

int main()
{
    cout << "Podaj ile metrow: ";
    cin>>metry;

    cout<<"na cale: "<<ile_cali(metry)<<endl;
    cout<<"na jardy: "<<ile_jardow(metry)<<endl;
    ile_mil(metry);

    return 0;
}
float ile_cali(float m) // Nawiasy okragle znaczy, ze masz do czynienia z funkcja. <- naglowek funkcji
{
    float cale=m*39.37; // cale - zmienna lokalna
    return cale;     //mozna tez po prostu zrobic "return m*39.37;"
   // return m*39.37;
}
float ile_jardow(float m)
{
    float jardy=m*1.0936;
    return jardy;
}
void ile_mil(float m)
{
    cout<<"Na mile: "<<m*0.0006213;
}
