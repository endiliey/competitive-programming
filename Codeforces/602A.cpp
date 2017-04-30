#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef vector<int> vi;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, bx;
    cin >> n >> bx;
    vi vx;
    vi vy;
    ll x = 0;
    for (int i = 0; i < n; ++i)
    {
        int foo;
        cin >> foo;
        vx.pb(foo);
    }
    int m, by;
    cin >> m >> by;
    ll y = 0;
    for (int i = 0; i < m; ++i)
    {
        int foo;
        cin >> foo;
        vy.pb(foo);
    }

    reverse(vx.begin(), vx.end());
    reverse(vy.begin(), vy.end());
    ll px = 1;
    ll py = 1;
    for (int i = 0; i < n; ++i, px *= bx)
    {
        x += vx[i] * px;
    }
    
    for (int i = 0; i < m; ++i, py *= by)
    {
        y += vy[i] * py;
    }

    if (y == x)
    {
        cout << "=";
    }
    else if (x < y)
    {
        cout << "<";
    }
    else
    {
        cout << ">";
    }
    return 0;
}
