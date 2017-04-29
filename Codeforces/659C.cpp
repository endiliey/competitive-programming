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
    int n, m;
    cin >> n >> m;
    unordered_set<int> e;
    vi t;
    for(int i = 0; i < n; ++i)
    {
        int foo;
        cin >> foo;
        e.insert(foo);
    }
    int money = m;
    for (int i = 1; i <= m; ++i)
    {
        if (!present(e, i))
        {
            if (money - i >= 0)
            {
                money -= i;
                t.pb(i);
            }
            else
            {
                break;
            } 
        }
    }
    cout << t.size() << "\n";
    tr(t, i)
    {
        cout << *i << " ";
    }
	return 0;
}
