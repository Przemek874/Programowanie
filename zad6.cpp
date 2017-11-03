
#include<stdafx.h>
#include<iostream>
#include<cstdlib>

using namespace std;
int liczba_dziesietna = 2566;
int reszta = 0;

int main()

{
	cout << "Liczba " << liczba_dziesietna<<"(10) to ";
	while (liczba_dziesietna != 0)
	{
		reszta=liczba_dziesietna % 16;
		liczba_dziesietna /= 16;
		switch (reszta)
		{
		case 10:
			cout << "A"; break;
		case 11:
			cout << "B"; break;
		case 12:
			cout << "C"; break;
		case 13:
			cout << "D"; break;
		case 14:
			cout << "E"; break;
		case 15:
			cout << "F"; break;

		default:
		{
			cout << reszta;
		}
		
		}
		
		
		
		
	}
	cout << " (16) czytana od tylu" << endl;
	reszta = 0;
	liczba_dziesietna= 2566;
	cout << "Liczba " << liczba_dziesietna << "(10) to ";
	while (liczba_dziesietna!=0)
	{
		reszta = liczba_dziesietna % 8;
		liczba_dziesietna /= 8;
		cout << reszta;
	}
	cout << " (8) czytana od tylu" << endl;
	cin.get();
	return 0;
}