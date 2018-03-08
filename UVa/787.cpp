#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll x;
    while(cin >> x){
        if (x == -999999) {
            ll mx = v[0], mn = v[0], ans = v[0];
            for(int i = 1; i < v.size(); ++i) {
                ll mxtemp = max(v[i], max(v[i] * mx, v[i] * mn));
                ll mntemp = min(v[i], min(v[i] * mx, v[i] * mn));
                mx = mxtemp, mn = mntemp;
                ans = max(ans, mx);
            }
            cout << ans << "\n";
            v.clear();
        }
        else {
            v.push_back(x);
        }
    }

    return 0;

}
