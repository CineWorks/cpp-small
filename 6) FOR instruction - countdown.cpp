#include <iostream>                             // Biblioteka wejscia i wyjscia. Podstawowa, standardowa, wymagana. (kontrola operacji cin i cout, klawiatura i ekran)
#include <cstdlib>                                  // Biblioteka dynamicznego zarzadzania pamiecia, tworzenia losowych liczb, komunikacja z srodowiskiem, szukania, sortowania, konwertowania i innych.
// W tym przypadku cstdlib jest zamieszczone na wszelki wypadek!
#include <windows.h>                              // Dodajemy nowa biblioteke do wykorzystania funkcji SLEEP
                                                                    // W S.O. Windows, biblioteka ma nazwe <windows.h>
using namespace std;

unsigned int sleep();                           // W Linuxsie trzeba rowniez zadeklarowac ta zmienna taka wlasnie komenda
unsigned int system();                         // Wyglada na to, ze w linuxsie wszystko trzeba deklarowac...

int main()
{
    cout<<"Test odliczania"<<endl;
    for (int i=15; i>=0 ;i--)
    {
    Sleep(1000);                                               // W Windowsie, czas odliczany jest w milisekundach, wiec wartosc sleep wynosilaby (1000);
    system("cls");                             // W Windowsowym cmd.exe instrukcja nazywa sie "system(cls);"
    // Komendy systemowe umieszczamy W NAWIASIE ORAZ CUDZYSLOWIU!!!
    cout << i <<endl;                               // W Linuxsie, czas odliczany jest w sekundach, dlatego wlasnie tylko jedynka w nawiasie (1);
    }
    cout<< "JEBUT!";                                // Ta instrukcja wykona sie po tym, jak zakonczy sie petla

    return 0;
}
