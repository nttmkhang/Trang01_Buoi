#include <iostream>
#include <sstream>
using namespace std;

string Process(long long);

int main()
{
    long long n;
    cin >> n;
    cout << Process(n);
}

string Process(long long n)
{
    stringstream stream;
    long long s = 0;
    int i = 0;
    do
    {
        i++;
        s += i;
    } while (s + i <= n);
    stream << i;
    return stream.str();
}