#include <iostream>
#include <sstream>
using namespace std;

long double GT(int);
string Process(int, int);

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;

    cout << Process(n, k);
    return 0;
}

long double GT(int n)
{
    long double s = 1;
    for (int i = 1; i <= n; i++)
        s = s * i;
    return s;
}

string Process(int n, int k)
{
    stringstream stream;
    long double n1 = GT(n);
    long double k1 = GT(k);
    long double temp = GT(n - k);
    stream << (long double)(n1) / k1 / temp;
    return stream.str();
}