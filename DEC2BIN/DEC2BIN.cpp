#include<iostream>
#include<string>
#include<iomanip>
#include<sstream>
using namespace std;

string Dec2Bi(int);
string process(int);

int main()
{
	int n;
	cin >> n;
	cout << process(n);
	return 0;
}

string Dec2Bi(long long x)
{
	string ans = "";
	while (x != 0)
	{
		int dv = x % 2;
		ans = to_string(dv) + ans;
		x /= 2;
	}
	return ans;
}

string process(int n)
{
	stringstream stream;
	long long x; 
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		stream << Dec2Bi(x) << endl;
	}
	return stream.str();
}