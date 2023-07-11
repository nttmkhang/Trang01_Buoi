#include <iostream>
#include <sstream>
using namespace std;

int ChuVi(int dai, int rong);
int DienTich(int dai, int rong);
string Process(int dai, int rong);

int main()
{
	int dai = 0;
	int rong = 0;
	cin >> dai >> rong;
	cout << Process(dai, rong);
}

int ChuVi(int dai, int rong) {
	return (dai + rong) * 2;
}

int DienTich(int dai, int rong) {
	return dai * rong;
}

string Process(int dai, int rong) {
	stringstream stream;
	stream << ChuVi(dai, rong) << " " << DienTich(dai, rong);
	return stream.str();
}