
#include<stdafx.h>
#include<iostream>


using namespace std;
int n = 0;
int x = 0;
int wynik = 0;
int main()
{
	int wynik = 0, liczba = 0, x = 0;
	for (x = 1; x <= 5; x++)
	{
		cout << "Podaj liczbe: ";
		cin >> liczba;
		if (liczba % 2 == 0)
		{
			wynik += liczba;
		}
	}
	cout << "wynik: " <<wynik<< endl;
	
	cin.get();
	return 0;
}