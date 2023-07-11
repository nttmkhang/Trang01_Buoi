#include<iostream>
#include<sstream>
#include<iomanip>
#include<vector>
using namespace std;

string KiemTraNguyenTo(int);

int main()
{
	int n;
	cin >> n;
	cout << KiemTraNguyenTo(n);
	return 0;
}

string KiemTraNguyenTo(int n)
{
	stringstream stream;
	if (n <= 1)
		stream << "NO";
	else if (n == 2)
		stream << "YES";
	else if (n == 3)
		stream << "YES";
	else if (n % 2 == 0)
		stream << "NO";
	else if (n % 3 == 0)
		stream << "NO";
	else
	{
		int lc = 1;
		for (long long i = 5; i * i <= n; i += 6)
			if ((n % i == 0) || n % (i + 2) == 0)
			{
				lc = 0;
				break;
			}
		if (lc == 1)
			stream << "YES";
		else
			stream << "NO";
	}
	return stream.str();
}