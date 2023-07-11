#include<iostream>
#include<sstream>
#include<vector>
#include<iomanip>
using namespace std;

void Nhap(vector<int>&, int&);
string TanSuat(vector<int>, int);

int main()
{
	int n;
	vector<int> v;
	Nhap(v, n);
	cout << TanSuat(v, n);
	return 0;
}

void Nhap(vector<int>& v, int& x)
{
	for (int i = 0; i < 10; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	cin >> x;
}

string TanSuat(vector<int> v, int x)
{
	stringstream stream;
	int lc = 0;
	for(int i = 0; i < 10; i++)
		if (v[i] == x)
		{
			lc = 1;
			stream << setw(3) << i + 1;
		}
	if (lc == 0)
		stream << -1;
	return stream.str();
}