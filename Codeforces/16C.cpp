#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int g = gcd(x, y);
    x /= g;
    y /= g;

    a /= x;
    b /= y;
    int mn = min(a, b);
    a = mn * x;
    b = mn * y;

    if (!a || !b) cout << "0 0";
    else cout << a << " " << b;
    return 0;
}
