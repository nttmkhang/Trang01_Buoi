#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

string process(vector<int>, int, int);

int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    vector<int> v;
    int u;
    for (int i = 0; i < n; i++)
    {
        cin >> u;
        v.push_back(u);
    }
    
    cout << process(v, n, x);
    return 0;
}

string process(vector<int> v, int n, int x)
{
    stringstream stream;
    int flag = 0;
    for (int i = 0; i < n; i++)
        if (v[i] == x)
            flag = 1;
    if (flag == 1)
        stream << "YES";
    else
        stream << "NO";
    return stream.str();
}