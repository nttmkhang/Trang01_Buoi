#include <iostream>
#include <sstream>
using namespace std;

double Tinh(double, int);
string Process(double, int);

int main()
{
	double x;
	cin >> x;
    int n;
    cin >> n;

    cout << Process(x, n);
    return 0;
}

double Tinh(double x, int n)
{
	double ans = x;
	double Tu = x;
	int Mau = 1;
	for (int i = 2; i <= n; i++)
	{
		Tu = Tu * x;
		Mau = Mau * i;
		ans += (double)Tu / Mau;
	}
	return ans;
}

string Process(double x, int n)
{
	stringstream stream;
	stream << Tinh(x, n);
	return stream.str();
}