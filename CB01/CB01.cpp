#include <iostream>
#include <sstream>
using namespace std;

string Xuat();

int main()
{
	cout << Xuat();
	return 0;
}

string Xuat()
{
	stringstream stream;
	stream << "Lap Trinh Khong Kho!";
	return stream.str();
}