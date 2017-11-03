#include "stdafx.h"
#include "iostream"
#define _USE_MATH_DEFINES
#include "math.h"

using namespace std;
int main()
{
	double x;
	double y;
	cout << "wprowadz liczbe x" << endl;
	cin >> x;
	cout << "wprowadz liczbe y" << endl;
	cin >> y;
	double funkcja1, funkcja2, funkcja3, funkcja4, funkcja5;
	
	funkcja1 = (1 / 8.*sqrt(x + y) - pow(M_E, 3) + M_PI);
	funkcja2 = (1./tan(pow(2,x+1)))+((2*pow(x,y)+M_E-10)/(log(abs(x+1))))-pow((x*y)/(pow(M_PI,2)),1/3.);
	funkcja3 = (pow(M_E, x + y))+sin((pow(x,2)+1./4*y)/8);
	funkcja4 = (pow(x, 4)+1/tan((log(abs(x+y)))/(abs((2*pow(x,3))*(pow(y,4)))))-(1/8.*x*pow(y,pow(M_E,x))))/(pow(x+y+pow(M_E,pow(M_E,2)),1/3.));
	funkcja5 =sin(cos((1/3.*x*pow(y,-1/3.) )))+log(2*x)+log(3*y)+pow(x+y*pow(M_E,pow(M_E,x+2+10)),1/3.)+sqrt(pow(x,y)+1);
	cout << funkcja1 << endl;
	cout << funkcja2 << endl;
	cout << funkcja3 << endl;
	cout<<funkcja4<<endl;
	cout << funkcja5 << endl;
	
	cin >> x;
	cin.get();
    return 0;
}

