#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

string Process(int, int);

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    
    cout << Process(a, b);
    return 0;
}

string Process(int a, int b)
{
    stringstream stream;
    for (int i = a; i <= b; i++)
        stream << i << setw(6);
    return stream.str();
}