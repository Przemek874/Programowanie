
#include<stdafx.h>
#include<iostream>


using namespace std;
int n = 0;
int x = 0;
int wynik = 0;
int main()

{
	cout<<"Podaj liczbe n: ";
	cin >> n;
	
	for (x = 1; x <= n; x++)
	{
		
		if (x % 2 != 0)
		{
			wynik += x;
		}
		
	}
	cout << "wynik: " <<wynik<< endl;
	cin >> x;
	cin.get();
	return 0;
}