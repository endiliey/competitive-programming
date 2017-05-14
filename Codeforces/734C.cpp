#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define all(c) (c).begin(),(c).end() 
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, m, k, x, s;
    cin >> n >> m >> k >> x >> s;
    vector<ll> a(m+1, 0), b(m+1, 0), c(k+1, 0), d(k+1, 0);
    vector<pair<ll,ll>> sp1, sp2;
    for(int i = 1; i <= m; ++i)
        cin >> a[i]; 
    for(int i = 1; i <= m; ++i)
        cin >> b[i];
    for(int i = 1; i <= k; ++i)
        cin >> c[i];
    for(int i = 1; i <= k; ++i)
        cin >> d[i];

    a[0] = x; // so this is also a choice (consider like first spell with no cost
    b[0] = 0; // although alrd done in vector initialization, just for clarity
    c[0] = 0;
    d[0] = 0;
    ll ans = (ll) n * x; // basic without buying

    for(int i = 0; i <= m; ++i)
    {
        int money_left = s - b[i];  
        if (money_left < 0) continue;
            
        // if second choice is possible
        int l = 0, r = k;
        while(l < r)
        {
            int m = (l + r + 1) / 2;
            if (d[m] <= money_left)
            {
                l = m;
            }
            else
            {
                r = m - 1;
            }
            ll need = n - c[l]; // instant used
            ll time = need * a[i]; // prepare with spell 1 help
            ans = min(ans, time);
        } 
    }
    cout << ans;
    return 0;
}
