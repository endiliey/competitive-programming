#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(decltype((c).begin()) i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())
typedef long long ll;

ll solve(ll x, ll y, ll p, ll q)
{
    ll ans = -1;
    int low = 1, high = 1e9;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        ll pnow = (ll) p * mid;
        ll qnow = (ll) q * mid;
        ll pass = pnow - x;
        ll fail = qnow - y - pass;
        if (pass < 0 || fail < 0)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            ans = pass + fail;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    for(ll test = 0; test < t; ++test)
    {
        ll x, y, p, q;
        cin >> x >> y >> p >> q;
        
        // solve
        ll ans = solve(x, y, p, q);
        cout << ans << "\n";
        
    }
    return 0;
}
