#include <iostream>                             // Biblioteka wejścia i wyjścia. Dodawanie bibliotek umożliwia dodawania fukncji w programie. Poszczególne funkcje wymagają przypisania odpowiedniej dla nich biblioteki.

using namespace std;                          // Przestrzeń nazw wykorzystywanych w programie.

int main()                                                    // Główna funkcja (zestaw zadań) w programie. Klamry { i } definiują początek i koniec funkcji. Po wykonaniu głównego zadania, program ulegnie zamknięciu.
{
    cout << "Hello world!" << endl;   //cout (ang. console output) - służy do wypisania tekstu na ekranie.
                                                                        //endl (ang. end line) - tworzy nową linie. C++ ignoruje znaki białe, dlatego zwykłe wciśnięcie enter nie zadziała.
                                                                        // " ; " - określa koniec instrukcji.

    return 0;                                                 // Zwrot umownej liczby, aby zasygnalizować oddanie sterowania nadrzędnemu procesowi. Wymagane w ustaleniu końca głównej funkcji
}
