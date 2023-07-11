#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

string GiaiBacNhat(int, int);

int main()
{
    int a, b;
    cin >> a >> b;

    cout << GiaiBacNhat(a, b);
    return 0;
}

string GiaiBacNhat(int a, int b)
{
    stringstream stream;
    if (a == 0)
        if (b == 0)
            stream << "WOW";
        else
            stream << "NO";
    else
    {
        float x = (float)(-b) / a;
        stream << fixed << setprecision(2) << x;
    }
    return stream.str();
}