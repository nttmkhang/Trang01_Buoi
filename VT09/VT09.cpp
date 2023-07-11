#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

void Nhap(vector<int>&);
void Sorting(vector<int>&);
bool ktNguyenTo(long);
string XuatNguyenTo(vector<int>);

int main()
{
	vector<int> v;
	Nhap(v);
	Sorting(v);
	cout << XuatNguyenTo(v);
	return 0;
}

void Nhap(vector<int>& v)
{
	int n;
	cin >> n;
	int x;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		v.push_back(x);
	}
}

void Sorting(vector<int>& v)
{
	sort(v.begin(), v.end());
}

bool ktNguyenTo(long n)
{
	if (n <= 1)
		return false;
	if (n == 2)
		return true;
	if (n == 3)
		return true;
	if (n % 2 == 0)
		return false;
	if (n % 3 == 0)
		return false;
	for (long long i = 5; i * i <= n; i += 6)
		if ((n % i == 0) || (n % (i + 2) == 0))
			return false;
	return true;
}

string XuatNguyenTo(vector<int> v)
{
	stringstream stream;
	int lc = v[0];
	if (ktNguyenTo(lc))
		stream << lc << " ";
	for (int i = 1; i < v.size(); i++)
	{
		if (ktNguyenTo(v[i]) == true && v[i] != lc)
		{
			stream << v[i] << setw(10);
			lc = v[i];
		}
	}
	return stream.str();
}
