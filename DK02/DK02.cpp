#include <iostream>
#include <sstream>
using namespace std;

string LonNhat(int, int, int);

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    int c;
    cin >> c;
    cout << LonNhat(a, b, c);
    return 0;
}

string LonNhat(int a, int b, int c)
{
    stringstream stream;
    int lc = a;
    if (b > lc)
        lc = b;
    if (c > lc)
        lc = c;
    stream << lc;
    return stream.str();
}