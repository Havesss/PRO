#include <iostream>
using namespace std;
int main()
{
	int klop = 0;
	int penny = 3;
	do {
		cout << "Klop!" << endl;
		klop++;
	} while (klop < penny);
	cout << "Penny!" << endl;
	return 0;
}
