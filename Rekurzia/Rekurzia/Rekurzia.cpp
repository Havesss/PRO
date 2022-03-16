#include <iostream>
using namespace std;
int main()
{
	int faktorial; // hodnota zakladu 
	cout << "Zadaj cislo na vypocet faktorialu." << endl;
	cin >> faktorial;
	int vysledok = faktorial; // vysledok = f 
    int a = (faktorial - 1);

	for (int b = 1; b <= a; b++) {
		faktorial = (faktorial * b);
	}
	cout << "Faktorial cisla " << vysledok << " je " << faktorial << endl;
}
	

	

