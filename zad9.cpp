
#include<stdafx.h>
#include<iostream>


using namespace std;

int main()
{
	int liczba = 0, wynik = 0;
	while (liczba!=-111)
	{
		cout << "Podaj liczbe: ";
		cin >> liczba;
		if(liczba!=-111)
		wynik -= liczba;
	}
	cout << wynik << endl;
	
	cin.get();
	return 0;
}