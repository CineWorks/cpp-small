#include <iostream>
#include <unistd.h>
#include <cstdlib>


using namespace std;

unsigned int sleep();

int i=1, liczba;

int main()
{
    cout << "Witamy w losowaniu! Za 3 sekundy nastapi zwolnienie blokady" << endl;
    sleep(3);
    cout << endl;

    srand(time(NULL));

    for (i=1; i<=6 ; i++)
    {
                liczba=rand()%49+1;
                sleep(1);
                cout << liczba << "\a"<< endl;
    }






    return 0;
}
