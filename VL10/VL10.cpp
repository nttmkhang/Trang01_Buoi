#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

int DemChuSo(string);
string process(string);

int main()
{
	string n;
	cin >> n;
	cout << process(n);
	return 0;
}

int DemChuSo(string n) {
	if (n[0] == '-') {
		return n.size() - 1;
	}
	return n.size();
}

string process(string n)
{
	stringstream stream;
	stream << DemChuSo(n);
	return stream.str();
}