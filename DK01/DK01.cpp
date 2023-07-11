#include <iostream>
#include <sstream>
using namespace std;

string LonNhat(int, int);

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;

    cout << LonNhat(a, b);
    return 0;
}

string LonNhat(int a, int b)
{
    stringstream stream;
    int lc = a;
    if (a < b)
        lc = b;
    stream << lc;
    return stream.str();
}