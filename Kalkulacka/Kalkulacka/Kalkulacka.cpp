using namespace std;
#include <iostream>

void sucet(float a, float b) {
	float vysledok = a + b;
	cout << "vysledok: " << vysledok << endl;
}
void rozdiel(float a, float b) {
	float vysledok = a - b;
	cout << "vysledok: " << vysledok << endl;
}
void sucin(float a, float b) {
	float vysledok = a * b;
	cout << "vysledok: " << vysledok << endl;
}
void podiel(float a, float b) {
	float vysledok = a / b;
	cout << "vysledok: " << vysledok << endl;
}

int main() {
	int  i = 5;
	while (i == 5) {
		cout << "KALKULACKA" << endl;
		float a, b;
		char znamienko;
		cout << "Zadaj prvu operandu:" << endl;
		cin >> a;
		cout << "Zadaj operatora + ; - ; * ; /:  " << endl;
		cin >> znamienko;
		int zn = znamienko;
		cout << "Zadaj druhu operandu:" << endl;
		cin >> b;

		if (zn == 47 && b == 0) {
			cout << "ERROR (nulou sa neda delit)" << endl;
		}
		else {
			switch (zn) {
			case 43:
				sucet(a, b);
				break;
			case 42:
				sucin(a, b);
				break;
			case 45:
				rozdiel(a, b);
				break;
			case 47:
				podiel(a, b);
				break;
			default:
				cout << "ERROR (tohto operatora nepoznam)" << endl;
			}

			cout << "chcete pocitat dalsi priklad?" << endl;
			cout << "a ) - ano  ;  nn ) - nie" << endl;
			char odpoved;
			cin >> odpoved;
			i = odpoved;

		}
	}
}


