#include <iostream>
#include <time.h> 
using namespace std;

int nahodneCislo0az36() {
    srand(time(NULL)); //vygenerovanie random cisel podla casu
    return rand() % 37; // rozsah 0 az 36
}


bool chcesPokracovat() {
    char odpoved;
    cout << "Chcete pokracovat? (A) alebo to vzdavas?"; cin >> odpoved;
    if (odpoved == 'a' || odpoved == 'A')
    {
        cout << "Pokracujeme!\n";
        return true;
    }
    else
    {
        cout << "papa, cau a uz sa nevracaj kym nevratis peniaze!\n";
        return false;
    }
}

int main() {
    double stavka;
    double celkova_vyhra = 0;

    cout << "Vitaj v RULETE!\n\n";

    do {
        cout << "Kolko chcete vsadit?\n"; cin >> stavka;

        int vsadene_cislo;
        int gulicka;

        cout << "Na ake cislo si chcete vsadit? 0-36  " ; cin >> vsadene_cislo;

        gulicka = nahodneCislo0az36();

        cout << "Gulicka pristala na cisle " << gulicka << "\n";

        // prehra
        if (vsadene_cislo != gulicka)
        {
            cout << "Prehrali ste $" << stavka << "\n";
            celkova_vyhra -= stavka;
        }
        // vyhra
        else
        {
            cout << "Vyhrali ste $" << 35 * stavka << endl;
            celkova_vyhra += 35 * stavka;
        }

        cout << "Celkovo si vyhral $" << celkova_vyhra << "\n";
    } while (chcesPokracovat());
}
