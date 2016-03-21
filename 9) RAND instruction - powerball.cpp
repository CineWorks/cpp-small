#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>


using namespace std;

unsigned int sleep();

int i=1, liczba;

int main()
{
    cout << "Witamy w losowaniu! Za 3 sekundy nastapi zwolnienie blokady" << endl;
    Sleep(3000);
    cout << endl;

    srand(time(NULL));

    for (i=1; i<=6 ; i++)
    {
                liczba=rand()%49+1;
                Sleep(1000);
                cout << liczba << "\a"<< endl;
    }

// Unfortunately, this program might generate one number more than once.




    return 0;
}
