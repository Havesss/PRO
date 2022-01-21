#include<iostream>
using namespace std;

int main()
{    
	int a = 10;            // Deklaracia premennej //Datovy typ int
	cout << "Hodnota a po pretypovani z int na char " << (char)a << endl;      // Vypis je hodnota (a) po pretypovani z int na char:b EXPLICITNE PRETYPOVANIE
	float d = 10.1;
	float r;
	r = d / 2;
	float O;
	const double PI = 3.14;                 // Deklaracia a inicializacia konstanty , PI je urcene ako konstanta, cislo sa nemeni.
    cout << "Obvod kruhu je " << (O = 2 * PI * r) << endl;          // Vypocet obvodu kruhu

	return 0;
}