#include <iostream>
#include <sstream>
using namespace std;

string Tong(int, int);

int main()
{
    int a, b;
    cin >> a >> b;

    cout << Tong(a, b);
    return 0;
}

string Tong(int a, int b)
{
    stringstream stream;
    stream << a + b;
    return stream.str();
}