#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> LietKeUoc(int n);
void Xuat(ostream& os, const vector<int>& temp);
string Process(int n);

int main()
{
	int n;
	cin >> n;
	cout << Process(n);
	return 0;
}

string Process(int n) {
	ostringstream output;
	if (n == 0) {
		output << "INF";
	}
	else {
		vector<int> temp = LietKeUoc(n);
		Xuat(output, temp);
	}
	return output.str();
}

void Xuat(ostream& os, const vector<int>& temp) {
	for (int val : temp) {
		os << val << " ";
	}
}

vector<int> LietKeUoc(int n) {
	n = abs(n);
	vector<int> vec;
	for (int i = n; i >= 1; --i) {
		if (n % i == 0) {
			vec.push_back(i);
		}
	}
	return vec;
}
