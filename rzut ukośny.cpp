#include "stdafx.h"
#include "iostream"
#define _USE_MATH_DEFINES
#include "math.h"


using namespace std;
int main()
{
	int pretkosc, kat;
	double Kat, sinuskata;
	const int przyspieszenie = 10;
	cout << "Podaj pretkosc: ";
	cin >> pretkosc;
	cout << "Podaj kat: ";
	cin >> kat;
	Kat = (kat*M_PI) / 180; //przeliczanie stopni na radiany
	sinuskata = sin(Kat);
	cout<<"Maksymalna wysokosc lotu to: "<<((pow(pretkosc*sinuskata,2))/(2*przyspieszenie))<<" m"<<endl;
	cout<<"Czas lotu: "<< (2 * pretkosc*sinuskata) / przyspieszenie<<" s" <<endl;
	cin >> pretkosc;
    return 0;
}

