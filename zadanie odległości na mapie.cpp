// zadanie odległości na mapie.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "math.h"

using namespace std;
int main()
{
	double x_b_b = 49.821521, y_b_b = 19.057752; //współrzędne Bielska-Białej
	double x_c_d = 49.901522, y_c_d = 18.992755; // współrzędne Czechowic-Dziedzic
	double x_o = 50.034888, y_o = 19.208475; // współrzędne Oświęcimia
	double x_k = 49.880111, y_k = 19.222791; // współrzędne Kent
	double a, b, c, d;
	a = sqrt(pow(x_c_d-x_b_b,2)+pow(y_c_d-y_b_b,2)); // odległość z czechowic do bielska
	b = sqrt(pow(x_o - x_c_d, 2) + pow(y_o - y_c_d, 2)); //odleglosc z czechowic do oswiecimia
	c = sqrt(pow(x_k - x_b_b, 2) + pow(y_k - y_b_b, 2));  //odleglosc z bielska do kęt 
	d = sqrt(pow(x_o - x_k, 2) + pow(y_o - y_k, 2)); //odleglosc z ket do oswiecimia
	bool odleglosc;
	odleglosc = a + b > c + d;
	cout<<(odleglosc ? "Odleglosc z Bielska Bialej do Oswiecimia przez Czechowice Dziedzice jest wiekasza" : "Odleglosc z Bielska Bialej do Oswiecimia przez Kety jest wieksza")<<endl;
	cin.get();
    return 0;
}

