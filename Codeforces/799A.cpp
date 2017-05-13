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

ll modpow(ll x, ll n, ll m) 
{
    if (n == 0) return 1 % m;
    ll u = modpow(x, n/2, m);
    u = (u * u) % m;
    if (n % 2 == 1) u = (u * x) % m;
    return u;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // start code here
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int c1 = 0, ans1 = 0;
    int c2 = 0, ans2 = 0;
    // one only
    for(int i = 0; i <= 1e9; ++i)
    {
        if (i > 0 && i % t == 0)
            c1 += k;
        if (c1 >= n)
        {
            ans1 = i;
            break;
        }
    }

    // two
    for(int i = 0; i <= 1e9; ++i)
    {
        if (i > 0 && (i % t == 0))
            c2 += k;
        if (i >= (d + t) && ((i - d) % t == 0))
            c2 += k;
        if (c2 >= n)
        {
            ans2 = i;
            break;
        } 
    }
    if (ans2 >= ans1)
    {
        cout << "NO";
    } 
    else
        cout << "YES";
    return 0;
}
