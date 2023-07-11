#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void Nhap(vector<int>&);
int LonNhat(vector<int>);
string Xuat(int);

int main()
{
	vector<int> v;
	Nhap(v);
	cout << Xuat(LonNhat(v));
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

int LonNhat(vector<int> v)
{
	int lc = 0;
	for (int i = 0; i < v.size(); i++)
		if (v[i] >= v[lc])
			lc = i;
	return lc;
}

string Xuat(int a)
{
	stringstream stream;
	stream << a;
	return stream.str();
}