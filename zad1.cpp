


#include "iostream"

using namespace std;
int main()
{
	int x;
	cout << "wprowadz liczbe x" << endl;
	cin >> x;
	if (x >= 10 && x < 20)
	{
		cout << "Liczba x miesci siê w przedziale [10, 20) " << endl;
		}
	else
	{

		cout << "Liczba nie miesci sie w przedziale [10, 20)  " << endl;
	}
	
	cin.get();
    return 0;
}

