#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    int mid = (a + b) / 2;
    int n1 = abs(mid - a), n2 = abs(mid - b);
    cout << n1 * (n1 + 1) / 2 + n2 * (n2 + 1) / 2;
    return 0;
}
