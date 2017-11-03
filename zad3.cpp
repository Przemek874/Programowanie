
#include "iostream"

using namespace std;
int main()
{
	int x;
	int y;

	cout << "wprowadz liczbe x" << endl;
	cin >> x;
	cout << "wprowadz liczbe y" << endl;
	cin >> y;
	if (x > 20 && x < 40 || y>=23 && y<27)
	{
		cout << "Liczba x lub y  miesci sie w przedziale " << endl;
		}
	else
	{

		cout << "Liczba x i y nie miesci sie w przedziale   " << endl;
	}
	cin >> x;
	cin.get();
    return 0;
}

