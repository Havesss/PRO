

#include <iostream>
using namespace std;

int main()
{
	cout << "Zadaj jedno zo slov - cestoviny , boj , zvucka :" << endl;
	string slovo;
	int cislo;

	cin >> slovo;
	if (slovo == "cestoviny") {
		cislo = 1;
	}
	else
		if (slovo == "boj") {
			cislo = 2;
		}
		else
			if (slovo == "zvucka") {
				cislo = 3;
			}

	switch (cislo) {
	case 1:
		cout << "Som hladny." << endl;
		break;
	case 2:
		cout << "Do zbrane." << endl;
		break;
	case 3:
		cout << "Nananananaaaaa." << endl;
		break;
	default:
		cout << "Toto slovo nepoznam." << endl;
		break;
	}

	return 0;
	
}

 
