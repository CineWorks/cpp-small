#include <iostream>

using namespace std;                                    // Spojrz na linie 22 i 24. Bez tej deklaracji, przed uzyciem cin.get(); musielibysmy za kazdym razem wpisywac std:: ("std::cin.get()")

int items;                                                              // Trzeba dodac w tym miejscu parametry, z ktorych bedziemy korzystac w tworzeniu programu.
int peers;                                                              // Skladaja sie one z deklaracji wpisywanych danych (w tym przypadku int - liczby calkowite) ...
int x, y;                                                                   // ... oraz nazwy zmiennych (dowolna nazwa, ale najlepiej intuicyjna i BEZ polskich znakow)

int main()
{
    cout << "Witaj w programie sprawiedliwie dzielacym przedmioty" << endl;
    cout << "Podaj dostępna liczbe przedmiotów: " << endl;
    cin     >> items ;                                               // Komenda sluzaca do wpisania danych (najczesciej liczb) do pamieci podrecznej, ktore sa podane przez przez uzytkownika
    cout << "Podaj ilosc osob: " << endl;
    cin     >> peers ;

    x=items/(peers);                                         // Najzwyczajniejsze obliczenia matematyczne. Wpisywanie ich jest (prawie) tak same, jak w Excelu.
    y=items-(x*peers);                                          // "Prawie" poniewaz mozemy wpisywac cale slowa, pod warunkiem, ze sa zadeklarowane jako parametry (patrz linie 5,6,7). Bazowo zawierają wartość 0.

    cout << "Ilosc przedmiotow na osobe: " << x <<endl;
    cin.ignore();                                                   // ignores the newline
    cout << "Wcisnij ENTER...";                                                                                                         // W Linux'sie nie uzywamy system(pause). Jezeli chcemy programowac na wskros platform, uzywamy tego zestawu komend.
    cin.get();                                                         //waits for character
    cout << "Ilosc pozostalych przedmiotow: " << y <<endl;
    return 0;
}
