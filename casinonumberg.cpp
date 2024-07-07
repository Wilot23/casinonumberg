#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <ctime>

using namespace std;
string grajdalej;
int generateCasinoNumber() {
    int liczba;;
    srand(time(NULL));
    liczba = rand() % 50 + 1;
    return liczba;
}
    
int main() {
    
    do{
        int twoje_pieniadze;
        int CasinoNumber = generateCasinoNumber();
        int userChoice;
        cout << "ile chcesz wplacic pieniedzy? ";
        cin >> twoje_pieniadze;
        cout << "Wybierz liczbe(1-50) ";
        cin >> userChoice;
        cout << "Casino chose: " << CasinoNumber << endl;

        if (twoje_pieniadze == 0) {
            cout << "nie mozesz grac nie masz pieniadzy";
        }
        else if (CasinoNumber != userChoice) {
            cout << "przegrales swoje pieniadze" << endl;
            twoje_pieniadze = 0;
            cout << twoje_pieniadze << " oto twoje saldo" << endl;
        }
        else if (CasinoNumber = userChoice) {
            cout << "Brawo Wygrales" << endl;
            twoje_pieniadze = twoje_pieniadze * 2;
            cout << twoje_pieniadze << " oto twoje saldo" << endl;
        }
        cout << "chcesz grac dalej? (t/n)";
        cin >> grajdalej;
    } while (grajdalej == "t" || grajdalej == "T");

    cout << "dziekujemy za granie" << endl;
    

    return 0;
}
