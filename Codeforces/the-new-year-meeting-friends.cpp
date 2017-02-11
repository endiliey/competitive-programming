#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> l = {a, b, c};
    std::sort(l.begin(), l.end());
    cout << (l[1] - l[0]) + (l[2] - l[1]);
    return 0;
}
