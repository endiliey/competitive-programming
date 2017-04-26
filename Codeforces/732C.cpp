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

ll count(ll b, ll d, ll s)
{
    ll mx = max(max(b, d), s);
    ll skip = mx - b + mx - d + mx - s;

    if (s < mx)
        skip--;
    if (s < mx && d < mx)
        skip--;
    return skip;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll b, d, s;
    cin >> b >> d >> s;
    ll ans = LLONG_MAX;

    ans = min(ans, count(b, d, s));
    ans = min(ans, count(b + 1, d, s));
    ans = min(ans, count(b + 1, d + 1, s));

    cout << ans;
    return 0;
}
