#include <iostream>
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
    int s = 0;
    for (int i = 1; i <= n; i++)
        s = s + i;
    stream << s;
    return stream.str();
}