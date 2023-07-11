#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

int ktChinhPhuong(long long);
string Process(long long);

int main()
{
	long long  x;
	cin >> x;
	
	cout << Process(x);
	return 0;
}

int ktChinhPhuong(long long x)
{
	long long can = sqrt(x);
	return (x == can * can);
}

string Process(long long x)
{
	stringstream stream;
	if (ktChinhPhuong(x))
		stream << "YES";
	else
		stream << "NO";
	return stream.str();
}