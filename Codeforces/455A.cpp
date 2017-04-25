#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    ll n, maxVal = 0;
    cin >> n;
    map<ll, ll> cnt;
    map<ll, ll> f;

    for(ll j = 1 , val; j <= n; ++j)
    {
        cin >> val;
        cnt[val]++;
        if (val > maxVal)
        {
            maxVal = val;
        }
    }

    f[0] = 0;
    f[1] = cnt[1];
    for (ll i = 2; i <= maxVal; ++i)
    {
        f[i] = max(f[i - 1], (f[i - 2] + cnt[i] * i));
    }

    cout << f[maxVal];
    return 0;
}
