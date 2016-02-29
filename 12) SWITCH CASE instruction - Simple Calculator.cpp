#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <curses.h>

using namespace std;

float x, y;
char wybor;


int main()
{
    while (true)
    {

        cout << "Podaj 1 liczbe: ";
        cin >> x;
        cout << "Podaj 2 liczbe: ";
        cin >> y;

        cout << "MENU GLOWNE" << endl;
        cout << "--------------" << endl;
        cout << "1. Dodawanie" << endl;
        cout << "2. Odejmowanie" << endl;
        cout << "3. Mnozenie" << endl;
        cout << "4. Dzielenie" << endl;
        cout << "5. Koniec Programu" << endl;


        cout << endl;
        cout << "Wybierz jedna z opcji: ";
        cin >> wybor;
        cout << endl;

        //cout << endl;
        //wybor=getch();
        //cout << endl;

        switch (wybor)
        {
            case '1': cout << "Suma: "<< x+y << endl;
            break;

            case '2': cout << "Roznica: "<< x-y << endl;
            break;

            case '3': cout << "Iloczyn: "<< x*y << endl;
            break;

            case '4':
            {
                if (y==0)
                    {cout << "Nie dzielimy przez 0!" << endl;}
                else
                    {cout << "Iloraz: "<< x/y << endl;}
            }
            break;

            case '5':
            {
                cin.ignore();
                cout << endl << "Program zakonczy dzialanie..." << endl;
                cin.get();
                exit(0);
            }
            break;

            default: cout << "Wybierz opcje 1,2,3,4 lub 5." << endl;
        }
        cin.ignore();
        cout << endl << "Wcisnij ENTER, aby sprobowac ponownie..." << endl;
        cin.get();
        system("clear");
    }
    return 0;
}
