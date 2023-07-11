#include <iostream>
#include <sstream>
using namespace std;

int Tinh(int);
string Process(int);

int main()
{
    int n;
    cin >> n;

    cout << Tinh(n);
    return 0;
}

int Tinh(int n)
{
    int s = 0;
    for (int i = 2; i <= n; i++)
        s += i;
    return s + 2 * n;
}

string Process(int n)
{
    stringstream stream;
    stream << Tinh(n);
    return stream.str();
}