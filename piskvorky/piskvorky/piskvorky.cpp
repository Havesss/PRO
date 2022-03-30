#include <iostream>
using namespace std;
char ocislovanie[9] = { '0','1','2','3','4','5','6','7','8' };

int vyhra()
{
	if (ocislovanie[0] == ocislovanie[1] && ocislovanie[1] == ocislovanie[2])
	{
		if (ocislovanie[0] == 'X')
			return 1;
		else
			return 2;
	}
	else
		if (ocislovanie[3] == ocislovanie[4] && ocislovanie[4] == ocislovanie[5])
		{
			if (ocislovanie[3] == 'X')
				return 1;
			else
				return 2;
		}
		else
			if (ocislovanie[6] == ocislovanie[7] && ocislovanie[7] == ocislovanie[8])
			{
				if (ocislovanie[6] == 'X')
					return 1;
				else
					return 2;
			}
			else
				if (ocislovanie[0] == ocislovanie[3] && ocislovanie[3] == ocislovanie[6])
				{
					if (ocislovanie[0] == 'X')
						return 1;
					else
						return 2;
				}
				else
					if (ocislovanie[1] == ocislovanie[4] && ocislovanie[4] == ocislovanie[7])
					{
						if (ocislovanie[1] == 'X')
							return 1;
						else
							return 2;
					}
					else
						if (ocislovanie[2] == ocislovanie[5] && ocislovanie[5] == ocislovanie[8])
						{
							if (ocislovanie[2] == 'X')
								return 1;
							else
								return 2;
						}
						else
							if (ocislovanie[0] == ocislovanie[4] && ocislovanie[4] == ocislovanie[8])
							{
								if (ocislovanie[0] == 'X')
									return 1;
								else
									return 2;
							}
							else
								if (ocislovanie[2] == ocislovanie[4] && ocislovanie[4] == ocislovanie[6])
								{
									if (ocislovanie[2] == 'X')
										return 1;
									else
										return 2;
								}
								else
									if (ocislovanie[0] == ocislovanie[3] && ocislovanie[3] == ocislovanie[6])
									{
										if (ocislovanie[0] == 'X')
											return 1;
										else
											return 2;
									}
									else
										return 0;
}

void mark(int player, int box)
{
	if (player == 1)
	{

		ocislovanie[box] = 'X';
	}
	else
		ocislovanie[box] = 'Y';
}

void display()
{
	for (int i = 0; i < 9; i++)
	{
		cout << ocislovanie[i] << "\t";
		if (i == 2 || i == 5 || i == 8)
			cout << "\n";
	}
}

int main()
{
	int player1 = 1, player2 = 2;

	int box, result = 0, flag = 0;

	for (int i = 1; i < 5; i++)

	{
		cout << "                                                    Piskvorky ";
		cout << "\n                                             Hrac 1 (X) - Hrac 2 (Y)";
		
		cout << "\n                                                     |     |     " << endl;
		cout << "                                                  " << ocislovanie[0] << "  |  " << ocislovanie[1] << "  |  " << ocislovanie[2] << endl;

		cout << "                                                _____|_____|_____" << endl;
		cout << "                                                     |     |     " << endl;

		cout << "                                                  " << ocislovanie[3] << "  |  " << ocislovanie[4] << "  |  " << ocislovanie[5] << endl;

		cout << "                                                _____|_____|_____" << endl;
		cout << "                                                     |     |     " << endl;

		cout << "                                                  " << ocislovanie[6] << "  |  " << ocislovanie[7] << "  |  " << ocislovanie[8] << endl;

		cout << "                                                     |     |     " << endl << endl;
		cout << "\n Hrac " << player1 << " : Vyber si policko. ";
		cin >> box;
		mark(player1, box);
		display();

		result = vyhra();
		if (result == 1)
		{
			cout << "\n  Gratulujem! Hrac " << player1 << " vyhral ";
			flag = 1;
			break;
		}
		else
			if (result == 2)
			{
				cout << "\n Gratulujem! Hrac " << player2 << " vyhral.";
				flag = 1;
				break;
			}

		cout << "\n Hrac " << player2 << " : Vyber si policko. ";
		cin >> box;
		mark(player2, box);
		display();

		result = vyhra();
		if (result == 1)
		{
			cout << "\n  Gratulujem! Hrac " << player1 << " vyhral. ";
			flag = 1;
			break;
		}
		else
			if (result == 2)
			{
				cout << "\n Gratulujem! Hrac " << player2 << " vyhral.";
				flag = 1;
				break;
			}
	}
	if (flag == 0)
		cout << " \n Remiza. ";

	return 0;
}