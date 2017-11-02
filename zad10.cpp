
#include<stdafx.h>
#define _USE_MATH_DEFINES
#include<iostream>


using namespace std;

int main()
{
	int x = 0;
	double funkcja = 0;
	for (x = 1; x <= 10; x++)
	{
		funkcja = 1 / 4.*sqrt(x + 2) - pow(M_E, 3 * x + (M_PI / 2.));
		cout << "Dla x = " << x << " f(x)= " << funkcja << endl;
	}
	cin.get();
	return 0;
}