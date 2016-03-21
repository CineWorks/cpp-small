#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

char opcja;



int main()
{
    for (;;)
    {
    cout << "OPERACJE NA LANCUCHACH C++" << endl;
    cout << "1. Odgadywanie plci" << endl;
    cout << "2. Odwracanie wyrazu z klawiatury " << endl;
    cout << "3. Laczenie wyrazow" << endl;
    cout << "4. Zmiana wielkosci liter" << endl;
    cout << "5. Wyszukiwanie w tekscie" << endl;
    cout << "6. Kasowanie fragmentu napisu " << endl;
    cout << "7. Wstawianie napisu" << endl;
    cout << "8. Zastapienie czesci tekstu" << endl;
    cout << "9. Wyjecie czesci tekstu" << endl;
    cout << "0. Zakoncz program" << endl;

    cout << endl << "Wybierz jedna z opcji:";
    cin >> opcja;

        switch (opcja)
        {
            case '1':
            {
                string imie;

                cout << "Podaj imie:";
                cin >> imie;
                cout<<endl;
                int dlugosc=imie.length();
                //cout << dlugosc;
                cout<<endl;
                if (imie[dlugosc-1]=='a')
                    cout <<endl<< "Kobieta";
                else cout <<endl<< "Mezczyzna";
                cout<<endl;

            }break;
            case '2':
            {
                string wyraz;
                cout << "Podaj wyraz do odwrocenia: ";
                cin>>wyraz;
                cout<<endl;
                int dlugosc = wyraz.length();

                for (int i=dlugosc-1; i>=0; i--)
                {
                    cout<<wyraz[i];
                }cout<<endl;

            }break;

            case '3':
            {
                string jeden;
                string dwa;
                cout<<"1st part: "<<endl;
                cin.ignore();
                getline(cin,jeden);
                cout<<"2nd part: "<<endl;
                getline(cin,dwa);
                string trzy=jeden+dwa;
                cout<<endl;
                cout<<trzy;
                cout<<endl;

            }break;

            case '4':
            {
                string napis;
                cout<<"Podaj napis:";
                cin.ignore();
                getline(cin,napis);
                cout<<endl;
                transform(napis.begin(),napis.end(),napis.begin(),::toupper);
                cout<<napis<<endl;
                cout<<endl;
                transform(napis.begin(),napis.end(),napis.begin(),::tolower);
                cout<<napis<<endl;
                cout<<endl;

            }break;

            case '5':
            {
                string wyraz="Litwo, ojczyzno moja, ty jestes jak zdrowie, ile cie trzeba cenic, ten tylko sie dowie, co cie stracil.";
                string look;
                cout<<wyraz<<endl;
                transform(wyraz.begin(),wyraz.end(),wyraz.begin(),::tolower);
                cout<<endl;
                cout<<"Wyszukaj wyraz: ";
                cin.ignore();
                getline(cin,look);
                cout<<endl;

                size_t pozycja=wyraz.find(look);

                if (pozycja!=string::npos)
                    cout<<"Znaleziono na pozycji: "<<pozycja;
                else cout<<"Nie znaleziono.";
            }break;

            case '6':
            {
                int start,endt;
                string napis="Can you erase one word in this sentence?";
                cout<<napis<<endl;
                cout<<endl;
                cout<<"Where to start? : ";
                cin>>start;
                start+1;
                cout<<endl;
                cout<<"Where to end? : ";
                cin>>endt;
                cout<<endl;

                napis.erase(start,endt);
                cout<<napis;
            }break;

            case '7':
            {
                int start;
                string endt;
                string napis="add one word in this sentence?";
                cout<<napis<<endl;
                cout<<endl;
                cout<<"Where to start? : ";
                cin>>start;
                start+1;
                cout<<endl;
                cout<<"What to add? : ";
                cin.ignore();
                getline(cin,endt);
                cout<<endl;

                napis.insert(start,endt);
                cout<<napis;
            }break;

            case '8':
            {
                int start,mid;
                string endt;
                string napis="Would you kindly replace one word in this sentence?";
                cout<<napis<<endl;
                cout<<endl;
                cout<<"Where to start? : ";
                cin>>start;
                start+1;
                cout<<endl;
                cout<<"How many symbols? : ";
                cin>>mid;
                cout<<endl;
                cout<<"What would you place instead? : ";
                cin.ignore();
                getline(cin,endt);
                cout<<endl;

                napis.replace(start,mid,endt);
                cout<<napis;
            }break;

            case '9':
            {
                int start,endt;
                string napis="You can print a part of this sentence here";
                cout<<napis<<endl;
                cout<<endl;
                cout<<"Where to start? : ";
                cin>>start;
                start+1;
                cout<<endl;
                cout<<"Where to end? : ";
                cin>>endt;
                cout<<endl;

                string nowynapis=napis.substr(start,endt);
                cout<<nowynapis;
            }break;

            case '0':
            {
            cin.ignore();
            cout << endl << "Program zakonczy dzialanie..." << endl;
            cin.get();
            exit(0);
            }break;

            default: cout << "Wybierz opcje od 0 do 9." << endl;
        }
        cin.ignore();
        cout << endl << "Wcisnij ENTER, aby sprobowac ponownie..." << endl;
        cin.get();
        system("cls");
    }
    return 0;

}
