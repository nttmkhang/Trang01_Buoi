#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

string Tinh(float, float, char);

int main()
{
    float a;
    cin >> a;
    char m;
    cin >> m;
    float b;
    cin >> b;
    cout << Tinh(a, b, m);
    return 0;
}

string Tinh(float a, float b, char m)
{
    stringstream stream;
    if (m == '+')
        stream << fixed << setprecision(2) << a + b;
    if (m == '-')
        stream << fixed << setprecision(2) << a - b;
    if (m == '*')
        stream << fixed << setprecision(2) << a * b;
    if (m == '/')
    {
        if (b == 0)
            stream << "Math Error";
        else
            stream << fixed << setprecision(2) << a / b;
    }
    return stream.str();
}