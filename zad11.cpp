
#include<stdafx.h>
#define _USE_MATH_DEFINES
#include<math.h>
#include<iostream>


using namespace std;

int main()
{
	double x = 0, y = 0, wynik_sumy = 0, wynik_iloczynu = 0;
	cout << "Wprowadz x: ";
	cin >> x;
	cout << "Wprowadz y: ";
	cin >> y;
	for (int i = 1; i <= 10; i++)
	{
		wynik_sumy += 1 / 3.*(sin(x));
	}
	for (int i=3;i<=-2;i--)
	{
		wynik_iloczynu*=sqrt(x + 2 * y) - pow(M_E, 3 * x + (M_PI / 2.));
	}
	cout << wynik_sumy + wynik_iloczynu << endl;
	cin.get();
	wynik_sumy = 0, wynik_iloczynu = 0;
	for (int i = -1; i <= -4; i--)
	{
		wynik_sumy += (1 / tan(i*x));
	}
	for (int i = 10; i <= 3; i--)
	{
		wynik_iloczynu*= pow(M_E, abs(sin(x)));
	}
	cout <<wynik_iloczynu+wynik_sumy<< endl;
	wynik_sumy = 0, wynik_iloczynu = 0;
	double wynik_iloczynu_2 = 0;
	for (int i = 1; i <= -2; i--)
	{
		wynik_iloczynu*= sqrt((x + y) / (log(i + 10)));
	}
	for(int i=1;i<=-4;i--)
	{
		wynik_iloczynu_2*= sqrt((x / 2.) + pow(y, x));
	}
	for (int j=-1;j<=-4;j--)
	{
		wynik_sumy += tan(j) + x;
	}
	cout <<wynik_iloczynu- wynik_iloczynu_2 - wynik_sumy << endl;
	return 0;
}