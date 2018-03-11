#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll y, ll x) {
    ll ans = 1LL, big = max(y, x);
    if (big == y) { // row
        if (big & 1) {
            ans = (big - 1) * (big - 1);
            ans += x;
        }
        else {
            ans = big * big;
            ans -= (x - 1);
        }
    }
    else { // column
        if (big & 1) {
            ans = big * big;
            ans -= (y - 1);
        }
        else {
            ans = (big - 1) * (big - 1);
            ans += y;
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        ll y, x;
        cin >> y >> x;
        cout << solve(y, x) << "\n";
    }
    return 0;
}
