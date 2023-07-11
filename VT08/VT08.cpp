#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

void BienDoiMang(long* arr, long n);
void Xuat(ostream& os, long* arr, long n);
void Nhap(istream& is, long* &arr, long& n);
string Process(long* arr, long n);

int main()
{
    long n = 0;
    long* arr = NULL;
    Nhap(cin, arr, n);
    cout << Process(arr, n);
    return 0;
}

void BienDoiMang(long* arr, long n) {
    for (int i = 1; i <= n - 2; i += 2) {
        arr[i] += abs(arr[i - 1] - arr[i + 1]);
    }
    if (n % 2 == 0) {
        arr[n - 1] += abs(arr[n - 2]);
    }
}

void Nhap(istream& is, long* &arr, long& n) {
    is >> n;
    arr = new long[n];
    for (int i = 0; i < n; ++i) {
        is >> arr[i];
    }
}

void Xuat(ostream& os, long* arr, long n) {
    for (int i = 0; i < n; ++i) {
        os << arr[i] << " ";
    }
}

string Process(long* arr, long n) {
    ostringstream output;
    BienDoiMang(arr, n);
    Xuat(output, arr, n);
    return output.str();
}