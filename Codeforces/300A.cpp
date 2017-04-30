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
    vi a, b, c;
    int foo;
    for (int i = 0; i < n; ++i)
    {
        cin >> foo;
        if (foo == 0)
            c.pb(foo);
        else if (foo > 0)
            b.pb(foo);
        else
            a.pb(foo);
    }

    if (sz(b) == 0)
    {
        for(int i = 0; i < 2; ++i)
        {
            b.pb(a.back());
            a.pop_back();
        }
    }

    if (sz(a) % 2 == 0)
    {
        c.pb(a.back());
        a.pop_back();
    }

    cout << sz(a);
    for(auto &i : a)
    {
        cout << " " << i;
    }
    cout << "\n";
    cout << sz(b);
    for(auto &i : b)
    {
        cout << " " << i;
    }
    cout << "\n";
    cout << sz(c);
    for (auto &i : c)
    {
        cout << " " << i;
    }
    return 0;
}
