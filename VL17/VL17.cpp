#include<iostream>
#include<cmath>
#include<sstream>
using namespace std;

string DemUocSo(int);

int main()
{
	int n;
	cin >> n;
	cout << DemUocSo(n);
	return 0;
}

string DemUocSo(int n)
{
	stringstream stream;
	n = abs(n);
	int dem = 0;
	for(int i = 1; i * i <= n; i++)
		if (n % i == 0)
		{
			dem++;
			if (i != n / i)
				dem++;
		}
	stream << dem;
	return stream.str();
}