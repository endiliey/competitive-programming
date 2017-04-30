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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vi b, a(n, 0);
    ll ans = 0;
    ll pad = 0;
    for (int i = 0; i < n; ++i)
    {
        ll foo;
        cin >> foo;
        b.pb(foo);
        if (a[i] + pad != b[i])
        {
            ll amt = b[i] - (a[i] + pad);
            pad += amt;
            ans += abs(amt);
        }
    }
    cout << ans;
    return 0;
}
