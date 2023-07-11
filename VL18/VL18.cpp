#include <iostream>
#include <sstream>
using namespace std;

typedef string BigNum;

BigNum Reverse(BigNum n);
string Process(BigNum n);

int main()
{
    BigNum n;
    cin >> n;
    cout << Process(n);
    return 0;
}

BigNum Reverse(BigNum n) {
    int length = n.size();
    while (n[length - 1] == '0') {
        n.pop_back();
        length--;
    }

    BigNum ret;
    for (int i = length - 1; i >= 0; i--) {
        ret.push_back(n[i]);
    }
    return ret;
}

string Process(BigNum n) {
    ostringstream output;
    output << Reverse(n);
    return output.str();
}