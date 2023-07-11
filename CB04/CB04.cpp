#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

string Tinh(int, int);

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    cout << Tinh(a, b);
    return 0;
}

string Tinh(int a, int b)
{
    stringstream stream;
    stream << a + b << endl;
    stream << a - b << endl;
    stream << a * b << endl;
    if (b == 0)
        stream << "ERROR";
    else
        stream << fixed << setprecision(2) << (float)a / b << endl;
    return stream.str();
}