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
    vi h(n, 0);
    for(int i = 0; i < n; ++i)
    {
        cin >> h[i];
    }

    ll ans = h[0] + 1;
    for(int i = 1; i < n; ++i)
    {
        ++ans; // jump
        if (h[i - 1] > h[i])
        {
            ans += (h[i - 1] - h[i]);
            ++ans; 
        }
        else
        {
            ans += h[i] - h[i -1];
            ++ans;
        }
    }
    cout << ans;
    return 0;
}
