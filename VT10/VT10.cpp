#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iomanip>

using namespace std;

void Nhap(vector<int>&, int&);
string SapXep(vector<int>&, int);

int main()
{
    vector<int> v;
    int n;
    Nhap(v, n);
    cout << SapXep(v, n);
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

bool comparasion(int a, int b)
{
    return a > b;
}

string SapXep(vector<int>& v, int n)
{
    stringstream stream;
    sort(v.begin(), v.end(), comparasion);
    for (int i = 0; i < n; i++)
        stream << setw(8) << v[i];
    return stream.str();
}