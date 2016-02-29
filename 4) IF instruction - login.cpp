#include <iostream>

using namespace std;

string login;
string password;
string x;                                                                                                                                           // Nawet pojedynczy znak nie bedacy liczba musi byc deklarowany jako STRING (pisze tak na wszelki wypadek)

int main()
{
    cout << "Witaj uzytkowniku!" << endl;
    cout << "Wpisz swoj login" << endl;
    cin >> login;
    cout << "Wpisz swoje haslo" <<endl;
    cin >> password;


    if((login=="admin")&&(password=="sradmin") )                                                    // Standardowo, nie zapominaj o dwóch znakach rownania!!! To bardzo wazne, debug nie wyznaczy za ciebie pierdol!
    {
                cout << "Poprawny login i haslo. Witaj admin!";
    }
    else if ((login!="admin")&&(password=="sradmin"))                                           // Tutaj pojawia sie ciekawy znak. Jak mozesz na komputerze zapisac znak rownania? "="!
    {                                                                                                                                                     // C++ z kolei uznaje jedynie "=="! Deal with it! (pojedynczy znak to znak przypisania, nie rownosci)
                cout << "Zly login i haslo" <<endl;                                                                    // To w takim razie jak wpiszesz znak nierownosci? "=/=" (zeslashowane 2 znaki rownania)? Byc moze
    }                                                                                                                                                     // Ale kij ci w oko! W C++ zapisujesz nierownosc jako "!=" (wykrzyknik po lewej stronie znaku rownania) Have fun!
        else if ((login=="admin")&&(password!="sradmin"))
    {                                                                                                                                                      // Dodatkowo, pojawia sie tu operator && oraz || (shift + \) . Sa to operatory AND oraz OR. Wiecej o tym w necie lub notatkach.
                cout << "Zle haslo. Czyzbys zapomnial hasla? (Y/N)" <<endl;
                cin >> x;
                if ((x=="Y")||(x=="y"))                                                                                                // Najlepiej jest rozpatrzyc dwie formy wpisania jednego znaku: z malej i z duzej litery.
                    {                                                                                                                                       // Dla nas, to ten sam znak, ale dla kompilatora, sa to dwa rozniace sie symbole. Keep that in mind
                    cout << "Niestety nie pomoge Ci z twoja pamiecia..."<<endl;
                    }
                else if ((x=="N")||(x=="n"))
                    {
                    cout<<"W takim razie postaraj sie wpisac je poprawnie!"<<endl;                      // Chcialbym rowniez dodac: ta sama formula odpowiadajaca na zly login lub haslo utrudni prace ...
                    }                                                                                                                                                           // ... nikczemnym osobom, ktore beda chcialy sila dostac sie do systemu jako inny uzytkownik ...
                else                                                                                                                                                        // ... niz oni sami, lub jesli w ogole nie maja normalnie dostepu do systemu.
                    {                                                                                                                                                           // Dlatego, nawet jesli jest wpisana regula dla dwoch roznych przypadkow, odpowiedz jest ta sama.
                    cout<<"Czy potrafisz czytac? Y oznacza tak, N oznacza nie!"<<endl;
                    cout<<"Sproboj ponownie...";
                    }
    }
        else
        {
                cout<<"Zly login i haslo" <<endl;                                                                       // Korzystajac z ELSE IF, mozesz rozpatrzyc jakie rozne opcje moze wybrac uzytkownik i napisac do nich ...
        }                                                                                                                                                   // ... odpowiednia odpowiedz. Koncowe ELSE to odpowiedz dla wszystkich innych (przewidzianych lub nie) ...
                                                                                                                                                            // ... odpowiedzi uzytkownika. Tak jak w tym przypadku.
    return 0;
}
