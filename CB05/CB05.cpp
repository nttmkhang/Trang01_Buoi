#include<iostream>
#include<sstream>
#include<iomanip>
using namespace std;

string ChiaDu(int, int);

int main()
{
	int a, b;
	cin >> a >> b;
	cout << ChiaDu(a, b);
	return 0;
}

string ChiaDu(int a, int b)
{
	stringstream stream;
	stream << a % b;
	return stream.str();
}