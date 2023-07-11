#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

int USCLN(int, int);
int BSCNN(int, int);
string process(int, int);

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    cout << process(a, b);
}

int USCLN(int a, int b) {
    if (b == 0)
        return a;
    return USCLN(b, a % b);
}

int BSCNN(int a, int b) {
    return abs((a * b) / USCLN(a, b));
}

string process(int a, int b)
{
    stringstream stream;
    stream << BSCNN(a, b);
    return stream.str();
}
