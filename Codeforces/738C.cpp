#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define PB push_back 
#define MP make_pair
#define F first
#define S second
#define all(c) (c).begin(),(c).end() 
#define REP(i,a,b) for (int i = a; i < b; ++i)
#define REP2(i,a,b) for (int i = a; i <= b; ++i)
#define tr(c,i) for(decltype((c).begin()) i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define fill(a, v) memset(a, v, sizeof a)
typedef long long ll;

const int N = 2e5 + 100;
int t, c[N], v[N];
vector<ll> g;

bool check(int vol)
{
    int need = 0;
    for(int i = 0; i < sz(g) - 1; ++i)
    {
        // distance each station
        ll dist = g[i + 1] - g[i];
        if (dist > vol) return false;
        ll exfuel = vol - dist;
        if (exfuel > dist)
        {
            // accelerate all the way
            need += dist;
        }
        else
        {
            // use normal speed && combine with acceleration
            need += dist * 2 - exfuel;
        }
    }
    return need <= t;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k, s;
    cin >> n >> k >> s >> t;
    g.PB(0); // start
    g.PB(s); // end
    for(int i = 0; i < n; ++i)
    {
        cin >> c[i] >> v[i];
    }

    for(int i = 0; i < k; ++i)
    {
        int foo;
        cin >> foo;
        g.PB(foo);
    }

    sort(all(g)); // sort all station
    
    // binary search
    ll l = 0, r = 2e9;
    while(l < r)
    {
        ll m = (l + r) / 2;
        if (check(m))
        {
            r = m;
        }
        else
        {
            l = m + 1;
        }
    }
    int ans = 2e9;
    for(int i = 0; i < n; ++i)
    {
        if (v[i] >= l) // if satisfy required volume
            ans = min(ans, c[i]);
    }

    if (ans == 2e9)
        ans = -1;
    cout << ans;
    return 0;
}
