#include <iostream>
#include <sstream>
using namespace std;

int LamTron(double x);
string Process(double x);

int main()
{
	double x;
	cin >> x;
	cout << Process(x);
	return 0;
}

int LamTron(double x) {
	int intPart = int(x);
	if (x > 0) {
		if (x - intPart >= 0.5)
			return intPart + 1;
		return intPart;
	}
	if (intPart - x >= 0.5)
		return intPart - 1;
	return intPart;
}

string Process(double x) {
	stringstream stream;
	stream << LamTron(x);
	return stream.str();
}