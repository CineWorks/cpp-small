#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <curses.h>							// tzw. <conio.h> Linux'owe

using namespace std;

float x, y;
char wybor;
int nr_miesiaca;

int main()
{
    while (true)
    {

        cout << "Ile dni ma miesiac. Sprawdz!" << endl; 
        cout << "Podaj numer miesiaca: ";
        if(!(cin >> nr_miesiaca))
            {
                cout << endl;
                cerr << "To nie jest liczba!";				//CERR to funkcja wyswietlajaca blad do konsoli bledow. Wyswietla tekst na ekranie (po czym poleca sie zamknac program, aby uniknac nieprzyjemnosci)
                exit(0);
            }


        switch (nr_miesiaca)
        {
            case 1: cout << "Suma: "<< x+y << endl;			// Case'y mozemy wstawic w ten sposob, gdy wiele wydarzen ma ten sam rezultat
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                cout << "Ten miesiac ma 31 dni!";
            break;


            case 4:
            case 6:
            case 9:
            case 11:
                cout << "Ten miesiac ma 30 dni!";
            break;


            case 2:
                int rok;
                cout << "Podaj rok: ";
                cin >> rok;
                //wykorzystanie warunku złożonego
                if ((rok%4==0 && rok%100!=0) || rok%400==0)		// kod do wyznaczania roku przystepnego
                    cout<<"Ten miesiac ma 29 dni!";
                else
                    cout<<"Ten miesiac ma 28 dni!";
            break;


            default: cout << "Mamy 12 miesiecy w roku. Wybierz liczbe od 1 do 12." << endl;
        }
        cout << endl;
        cin.ignore();
        cout << endl << "Wcisnij ENTER, aby sprobowac ponownie..." << endl;
        cin.get();
        system("clear");
    }
    return 0;
}
