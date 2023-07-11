#include <iostream>
#include <sstream>

using namespace std;

string gcd(int, int);

int main()
{
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b);
    return 0;
}

string gcd(int a, int b)
{
    stringstream stream;
    int m = abs(a);
    int n = abs(b);

    while (m * n != 0)
    {
        if (m < n)
            n = n - m;
        else
            m = m - n;
    }
    stream << m + n;
    return stream.str();
}