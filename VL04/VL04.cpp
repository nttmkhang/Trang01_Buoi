#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

string Tong(int);

int main()
{
    int n;
    cin >> n;
    cout << Tong(n);
    return 0;
}

string Tong(int n)
{
    stringstream stream;
    float s = 0;
    for (int i = 2; i <= n; i++)
    {
        s = s + (float)1 / i;
    }
    stream << fixed << setprecision(4) << s;
    return stream.str();

}