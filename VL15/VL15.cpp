#include <iostream>
#include <sstream>
using namespace std;

int UCLN(int, int);
string Process(int, int);

int main()
{
	int Tu;
	cin >> Tu;
	int Mau;
	cin >> Mau;

	cout << Process(Tu, Mau);
	return 0;
}

int UCLN(int Tu, int Mau)
{
	Tu = abs(Tu);
	Mau = abs(Mau);
	if (Mau == 0)
		return Tu;
	return UCLN(Mau, Tu % Mau);
}

string Process(int Tu, int Mau)
{
	stringstream stream;
	if (Mau == 0)
		stream << "INVALID";
	else
	{
		int ucln = UCLN(Tu, Mau);
		Tu /= ucln;
		Mau /= ucln;
		if (abs(Mau) == 1)
			stream << Tu * Mau;
		else
		{
			if (Tu * Mau < 0)
				stream << -abs(Tu) << " " << abs(Mau);
			else
				stream << abs(Tu) << " " << abs(Mau);
		}
	}
	return stream.str();
}