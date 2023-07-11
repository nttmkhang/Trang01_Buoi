#include<iostream>
#include<sstream>
#include<iomanip>

using namespace std;

string TinhS(int);

int main()
{
	int n;
	cin >> n;
	cout << TinhS(n);
	return 0;
}

string TinhS(int n)
{
	stringstream stream;
	int dau = 1, ans = 0;
	for (int i = 1; i <= 3 * n; i++)
	{
		ans += dau * i;
		dau = -dau;
	}
	if (n % 2 == 0)
		ans += (3 * n + 1);
	else
		ans -= (3 * n + 1);
	stream << ans;
	return stream.str();
}