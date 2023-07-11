#include <iostream>
#include <sstream>
using namespace std;

int ktHoanHao(int);
string Process(int);

int main()
{
    int n;
    cin >> n;
    
    cout << Process(n);
    return 0;
}

int ktHoanHao(int n)
{
    stringstream stream;
    int s = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            s += i;
    return (s == n);
}

string Process(int n)
{
    stringstream stream;
    if (ktHoanHao(n))
        stream << "YES";
    else
        stream << "NO";
    return stream.str();
}