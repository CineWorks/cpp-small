#include <iostream>          // Wskaznik - zmienna przechowujaca w sobie adres RAM innej zmiennej
#include <stdio.h>            // " * " - (gwiazdka) - znak zarezerwowany dla wskaŸników. Poprzez gwiazdke, mozesz pracowac na tych zmiennych, na które wskazuje wskaŸnik. (czyli bez gwiazki pracujesz na adresie)
#include <cstdlib>          // " & " - (ampersand) operator uzyskiwania adresu w pamiêci tego, co znajduje siê po jego prawej stronie.
#include <time.h>

using namespace std;

float srednia(float *tab, int ile);

int opcja;
int main()
{
    for (;;)
    {
        cout << "WSKAZNIKI C++" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "1. Dynamiczne alokowanie pamieci" << endl;
        cout << "2. Zwiekszenie szybkosci zapisu i odczytu komorek w tablicy" << endl;
        cout << "3. Dawanie funkcjom do pracy oryginalow zmiennych z programu wywolujacego" << endl;
        cout << "4. Mozliwosc wspolpracy z urzadzeniem zewnetrznym" << endl;
        cout << "0. Zakoncz program" << endl;

        cout << endl << "Wybierz jedna z opcji:";
        cin >> opcja;


    switch (opcja)
        {
            case 1:
            {
                int ile;
                cout<<"Ile liczb w tablicy: ";
                cin>>ile;

                int *tablica;
                tablica = new int [ile];

                for (int i=0; i<ile; i++) //tu jest gdzies blad (tu byl srednik na koncu wtf...)
                {
                    cout<<(int)tablica<<endl;
                    tablica++;
                }

                delete [] tablica;
            }break;

            case 2:
           {
                int ile;
                clock_t start, stop;
                long double czas;

                cout<<"Ile liczb w tablicy: ";
                cin>>ile;

                int *tablica;
                tablica = new int [ile];

                start=clock();

                for (int i=0; i<ile; i++)
                {
                    tablica[i]=i;
                    tablica[i]+=50;
                }

                stop = clock();
                czas = (long double) (stop-start) / CLOCKS_PER_SEC;

                cout<<"Czas zapisu (bez wskaznika): "<< czas<<endl;

                delete [] tablica;

                int*wskaznik = tablica;
                tablica = new int [ile];

                start=clock();

                for (int i=0; i<ile; i++)
                {
                    *wskaznik = i;
                    *wskaznik+=50;
                    wskaznik++;
                }

                stop = clock();
                czas = (long double) (stop-start) / CLOCKS_PER_SEC;

                cout<<"Czas zapisu (ze wskaznikiem): "<< czas<<endl;

            }break;

            case 3:
            {


                float tablica[3];

                tablica[0] = 5.5;
                tablica[1] = 4.5;
                tablica[2] = 2;

                cout<<"Srednia wynosi: "<<srednia(tablica,3)<<endl;

                cout<<tablica[0]<<endl;
                cout<<tablica[1]<<endl;
                cout<<tablica[2]<<endl;
            }break;

            case 4:
            {
                cout<<"Dzieki wskaznikom (eng. pointers) mozemy wyswietlic np. temperature zapisywana w danym adresie komputera. Niestety, nie posiadam takowego adresu, wiec nie bedzie tu zadnej magii - tylko tekst.";
            }break;

            case 0:
            {
                cin.ignore();
                cout << endl << "Program zakonczy dzialanie..." << endl;
                cin.get();
                exit(0);
            }break;

            default: cout << "Wybierz opcje od 0 do 4." << endl;
        }
        cin.ignore();
        cout << endl << "Wcisnij ENTER, aby sprobowac ponownie..." << endl;
        cin.get();
        system("cls");
    }
    return 0;
}
float srednia(float *tab, int ile)
{
    float suma=0;

    for (int i=0; i<ile; i++)
    {
        suma+=*tab;
        *tab=999;
        tab++;
    }
    return suma/ile;
}
