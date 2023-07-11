#include <iostream>
#include <sstream>
using namespace std;

int ktNhuan(int);
int getNgay(int thang, int nam);
string Process(int thang, int nam);

int main()
{
	int thang;
	int nam;
	cin >> thang;
	cin >> nam;
	cout << Process(thang, nam);
}

string Process(int thang, int nam) {
	stringstream stream;
	if (thang < 1 || thang > 12) {
		stream << "INVALID";
	}
	else {
		stream << getNgay(thang, nam);
	}
	return stream.str();
}

int getNgay(int thang, int nam) {
	int ngayTrongThang[13] = { -1,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(nam)) {
		ngayTrongThang[2] = 29;
	}
	return ngayTrongThang[thang];
}

int ktNhuan(int n) {
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
		return 1;
	return 0;
}