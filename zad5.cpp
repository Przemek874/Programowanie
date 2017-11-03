#include "stdafx.h"
#include "iostream"
#define _USE_MATH_DEFINES
#include "math.h"

using namespace std;
int main()
{
	int x = -20;
	double funkcjaA = 0, funkcjaB = 0, funkcjaC = 0;
	
	while (x<20)
	{
		funkcjaA= 2 * pow(x, 2) + 2 * x - 12;
		
		if (funkcjaA == 0)
		{
			cout<<"f=2x^2+2x-12 ma pierwiastek w x= "<<x<<endl;
		}
		x++;
	}
	x = -20;
	
	while (x<=20)
	{
		funkcjaB = pow(x, 2) - 2 * x - 15;
		if (funkcjaB==0)
		{
			cout<<"f=x^2-2*x-15 ma pierwiastek w x= "<<x<<endl;
		}
		x++;
	}
	x = -20;
	while (x<=20)
	{
		funkcjaC = pow(x, 2) + 4 * x + 4;
		if (funkcjaC==0)
		{
			cout<<"f=x^2+4x+4 ma pirwiastek w x= "<<x<<endl;
		}
		x++;
	}
		
		

	cin.get();
    return 0;
}

