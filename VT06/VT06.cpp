#include<iostream>
#include<vector>
#include<iomanip>
#include<sstream>
using namespace std;

void Nhap(vector<int>&, int&);
double TrungBinh(vector<int>);
string process(vector<int>);
int main()
{
	vector<int> a;
	int n;
	Nhap(a, n);
	cout << process(a);
	return 0;
}

void Nhap(vector<int>& a, int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		a.push_back(x);
	}
}

double TrungBinh(vector<int> a)
{
	int count = 0;
	double ans = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (abs(a[i] % 2) == 1)
		{
			ans += a[i];
			count++;
		}
	}
	return ans / count;
}

string process(vector<int> a)
{
	stringstream stream;
	stream << fixed << setprecision(4) << TrungBinh(a);
	return stream.str();
}