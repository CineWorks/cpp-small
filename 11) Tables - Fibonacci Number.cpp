#include <iostream>
#include <iomanip>                       // Czyli input-output manipulation - deklaracja biblioteki sluzacej do manipulacja wypisywanych danych w programie
                                        // Wykorzystamy ja, aby program wyswietlal pelne liczby, a nie skrocone zapisem naukowym (np. "100e+005")

using namespace std;
                                        // Tutaj pojawia sie wielka zaleta tablic: 10000 zmiennych w jednym zdaniu!
long double fib[10000];                 // LONG DOUBLE - niewyobrazanie wielka przestrzen liczbowa, wielokrotnie wieksza od przestrzeni INT
int n;
int c;

int main()
{
    cout << "Program wypisujacy Ciag Fibonacciego i Zlotej Liczby" << endl<<endl;
    cout << "Wybierz 1 dla ciagu liczb,"<<endl<<"2 dla poszczegolnej liczby"<<endl<<"lub 3 aby wyznaczyc Zlota Liczbe: ";
    cin >> c;

    if (c==1)
    {
        cout << "Ile liczb Fibonacciego mam wyznaczyc: ";
        cin >> n;
        cout << endl;

        fib[0]=1; fib[1]=1;

        for (int i=2; i<n; i++)
        {
            fib[i] = fib[i-1] + fib[i-2];
        }

        setprecision(10000);                                                    // Ustawienie precyzji wypisywania liczb. Komenda mowi: "Wyswietl ta liczbe chocby skladala sie z 10 tysiecy znakow

            for (int i=0; i<n; i++)
        {
            cout << endl << "Wyraz nr " << i+1 << ": " << fib[i];
        }
            cout << endl;

    }
    else if (c==2)
    {
        cout << "Ktora liczbe Fibonacciego mam wyznaczyc: ";                    // Przy wpisaniu liczby wiekszej niz 23601, otrzymasz informacje o tym, ze liczba jest nieskonczona
        cin >> n;                                                               // A tak pozatym nie polecam w funkcji nr 1. Samo wypisywanie zajmie strasznie dlugo czasu
        cout << endl;

        fib[0]=1; fib[1]=1;

        for (int i=2; i<n; i++)
        {
            fib[i] = fib[i-1] + fib[i-2];
        }


            cout << endl << "Wyraz nr " << n << ": " << fib[n-1];              // Tu mozesz smialo wyprobowac wpisywanie wielkich liczb. Wyswietli sie tylko ta, ktorej szukasz
                                                                                // I w przeciwienstwie do poprzedniej funkcji (1) komenda zostanie wykonana w mgnieniu oka
            cout << endl;
    }
    else if (c==3)
    {

        cout << "Podaj liczbe Ciagu Fibbonaciego, z ktorej mam wyznaczyc zlota liczbe: ";
        cin >> n;
        cout << endl;

        fib[0]=1; fib[1]=1;

        for (int i=2; i<n; i++)
        {
            fib[i] = fib[i-1] + fib[i-2];
        }

        setprecision(10000);

        cout << "Zlota liczba: " << fib[n-1]/fib[n-2];
        cout << endl;
    }

    else
    {
        cout << endl;
        cout << "Naastapil blad. Wybierz 1, 2 lub 3" << endl;
    }

    cout << endl;
    cin.ignore();
    cout << "Wcisnij Enter aby kontynuowac";
    cin.get();

    return 0;
}
