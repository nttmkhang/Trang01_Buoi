#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void Nhap(vector<int>&, int&);
int Dem(vector<int>, int x);
string Xuat(vector<int> v, int x);

int main()
{
	vector<int> v;
	int x;
	Nhap(v, x);
	cout << Xuat(v, x);
	return 0;
}

void Nhap(vector<int>& v, int& a)
{
	int n;
	cin >> n;
	int a;
	cin >> a;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
}

int Dem(vector<int> v, int x)
{
	int dem = 0;
	for (int i = 0; i < v.size(); i++)
		if (v[i] == x)
			dem++;
	return dem;
}

string Xuat(vector<int> v, int x)
{
	stringstream stream;
	stream << Dem(v, x);
	return stream.str();
}