#include<iostream>
#include<sstream>
#include<vector>

using namespace std;

void Nhap(vector<int>&, int&);
string SoLonNhat(vector<int>);

int main()
{
	int n;
	vector<int> v;
	Nhap(v, n);
	cout << SoLonNhat(v);
	return 0;
}

void Nhap(vector<int>& v, int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
}

string SoLonNhat(vector<int> v)
{
	stringstream stream;
	int temp = v[0];
	for (int i = 1; i < v.size(); i++)
		if (v[i] > temp)
			temp = v[i];
	stream << temp;
	return stream.str();
}