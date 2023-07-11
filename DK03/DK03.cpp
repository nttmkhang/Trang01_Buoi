#include<iostream>
#include<sstream>
#include<iomanip>

using namespace std;

string ChenhLech(int, int);

int main()
{
	int a, b;
	cin >> a >> b;
	cout << ChenhLech(a, b);
	return 0;
}

string ChenhLech(int a, int b)
{
	stringstream stream;
	stream << abs(a - b);
	return stream.str();
}