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

struct p
{
    int t;
    int f;
    p(int a, int b)
    {
        f = a;
        t = b;
    }

    bool operator<(const p &p2)
    {
        return f < p2.f;
    }
};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, s;
    cin >> n >> s;
    vector<p> passenger;
    for(int i = 0; i < n; ++i)
    {
        int f, t;
        cin >> f >> t;
        passenger.pb(p(f, t));
    }

    sort(all(passenger));
    int now = 0;
    for(int i = n - 1; i >= 0; --i)
    {
        if (now < passenger[i].t)
        {
            now += max(s - passenger[i].f, passenger[i].t - now);
            s = passenger[i].f;
        }
        else
        {
            now += s - passenger[i].f;
            s = passenger[i].f;
        }
    }
    if (s > 0)
        now += s;
    cout << now;
    return 0;
}
