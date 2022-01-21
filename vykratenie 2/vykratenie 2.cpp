#include <iostream>
using namespace std;
int main()
{
	cout << "Napis cislo" << endl;       //vypytanie cisla od uzivatela
	int cislo;            //deklaracia premennej
	cin >> cislo;
	int vysledok;         //deklaracia premennej
	vysledok = cislo * 2;  //vyratanie vysledku nasobkom 2
	cout << "vysledok je " << vysledok << endl;    //vypisanie vysledku od uzivatela
	return 0;
}