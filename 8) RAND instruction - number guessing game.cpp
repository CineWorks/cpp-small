#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

using namespace std;

int liczba, strzal, ile_prob=0;

int main()
{
    cout << "Witaj! Pomyslalem sobie liczbe z zakresu 1..100" << endl;

    srand(time(NULL));
    liczba=rand()%100+1;

    while(strzal!=liczba)
    {
                ile_prob++;
                cout << "Zgadnij jaka: (to Twoja " << ile_prob <<" proba): ";
                cin >> strzal;

                if (strzal==liczba)
                     cout << "Udalo sie! Wygrywasz w "<< ile_prob <<" probie!" << endl;

                else if (strzal>liczba)
                     cout << endl << "To za duzo!" << endl;

                else if (strzal<liczba)
                     cout << endl << "To za malo!" << endl;
    }

    getchar(); getchar();

    return 0;

}
