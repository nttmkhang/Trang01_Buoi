#include<iostream>
#include<sstream>
#include<string>
#include<iomanip>
using namespace std;

using namespace std;

bool ktHopLe(int);
bool KiemTraNamNhuan(int);
string ktNamNhuan(int);

int main()
{
	int n;
	cin >> n;
	cout << ktNamNhuan(n);
	return 0;
}

bool ktHopLe(int a)
{
	if (!(a > 0 && a <= 100000))
		return false;
	return true;
}

bool KiemTraNamNhuan(int a)
{
	if (a % 4 == 0 && a % 100 != 0)
		return true;
	if (a % 400 == 0)
		return true;
	return false;
}

string ktNamNhuan(int a)
{
	stringstream stream;
	if (!ktHopLe(a))
		stream << "INVALID";
	else
	{
		if (KiemTraNamNhuan(a))
			stream << "YES";
		else
			stream << "NO";
	}
	return stream.str();
}