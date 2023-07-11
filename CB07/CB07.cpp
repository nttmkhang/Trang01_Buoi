#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

string Process(float);

int main()
{
    float r;
    cin >> r;
    cout << Process(r);
    return 0;
}

string Process(float r)
{
    stringstream stream;
    stream << fixed << setprecision(3) << 2 * 3.14 * r << " ";
    stream << fixed << setprecision(3) << 3.14 * r * r;
    return stream.str();
}