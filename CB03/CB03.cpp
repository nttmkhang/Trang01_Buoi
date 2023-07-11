#include <iostream>
#include <sstream>
using namespace std;

string Tong(int, int, int);

int main()
{
    int a;
    cin >> a; 
    int b;
    cin >> b;
    int c;
    cin >> c;

    cout << Tong(a, b, c);
    return 0;
}

string Tong(int a, int b, int c)
{
    stringstream stream;
    stream << a + b + c;
    return stream.str();
}