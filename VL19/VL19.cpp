#include <iostream>
#include <sstream>
#include <iomanip>
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
    int c[10000];
    int k = 0;
    for (int i = a + 1; i < b; i++)
        if (i % 3 == 0)
            c[k++] = i;
    if (k == 0)
    {
        stream << "NOT FOUND";
        return stream.str();
    }
    for (int i = k - 1; i >= 0; i--)
        stream << c[i] << setw(6);
    return stream.str();
}