#include <iostream>
#include <sstream>

using namespace std;

string TongSoChan(int, int);

int main()
{
    int a, b;
    cin >> a >> b;

    cout << TongSoChan(a, b);
    return 0;
}

string TongSoChan(int a, int b)
{
    stringstream stream;
    int s = 0;
    for (int i = a; i <= b; i++)
        if (i % 2 == 0)
            s += i;
    stream << s;
    return stream.str();
}