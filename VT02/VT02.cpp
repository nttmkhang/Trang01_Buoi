#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

void Nhap(istream& is, vector<int>& vec);
int FindSecondMax(const vector<int>& vec);
int FindMax(const vector<int>& vec);
string Process(const vector<int>& vec);

int main()
{
	vector<int> vec;
	Nhap(cin, vec);
	cout << Process(vec);
}

void Nhap(istream& is, vector<int>& vec) {
	int n = 0;
	is >> n;
	for (int i = 0; i < n; ++i) {
		int val = 0;
		is >> val;
		vec.push_back(val);
	}
}

int FindMax(const vector<int>& vec) {
	int max = vec[0];
	for (int val : vec) {
		if (val > max) {
			max = val;
		}
	}
	return max;
}

int FindSecondMax(const vector<int>& vec) {
	int max = FindMax(vec);
	int secondMax = max;
	for (int val : vec) {
		if (val < max) {
			secondMax = val;
			break;
		}
	}
	for (int val : vec) {
		if (val != max && val > secondMax) {
			secondMax = val;
		}
	}
	return secondMax;
}

string Process(const vector<int>& vec) {
	ostringstream output;
	int max = FindMax(vec);
	int secondMax = FindSecondMax(vec);
	if (max == secondMax) {
		output << "NOT FOUND";
	}
	else {
		output << secondMax;
	}
	return output.str();
}