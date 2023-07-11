#include <iostream>
#include <sstream>
using namespace std;

int GiaiThua(int n);
string Process(int n);

int main()
{
    int n;
    cin >> n;
    cout << GiaiThua(n);
    return 0;
}

string Process(int n) {
    stringstream stream;
    stream << GiaiThua(n);
    return stream.str();
}

int GiaiThua(int n) {
    int t = 1;
    for (int i = 2; i <= n; i++) {
        t = t * i;
    }
    return t;
}