#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define pb push_back 
#define present(c,x) ((c).find(x) != (c).end()) 
#define mp(a, b) make_pair(a, b)
set<pair<deque<int>, int>> state;

ii play(deque<int> &a, deque<int> &b, deque<int> &c, int t)
{
    if (present(state, mp(c, sz(a))))
    {
        return mp(-1,-1);
    }
    else
    {
        state.insert(mp(c, sz(a)));
    }
    if (a.empty())
    {
        return mp(t, 2);
    } 
    if (b.empty())
    {
        return mp(t, 1);
    }
    int x = a[0];
    int y = b[0];
    if (y > x)
    {
        a.pop_front();
        b.pop_front();
        b.push_back(x);
        b.push_back(y);
    }
    else
    {
        b.pop_front();
        a.pop_front();
        a.push_back(y);
        a.push_back(x);
    }
    deque<int> C;
    for(int i = 0; i < sz(a); ++i)
    {
        C.pb(a[i]);
    }
    for (int i = 0; i < sz(b); ++i)
    {
        C.pb(b[i]);
    }
    return play(a, b, C, t + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int k1, k2;
    cin >> k1;
    deque<int> a, b, c;
    int foo;
    for(int i = 0; i < k1; ++i)
    {
        cin >> foo;
        a.pb(foo);
    }
    cin >> k2;
    for(int i = 0; i < k2; ++i)
    {
        cin >> foo;
        b.pb(foo);
    }
    ii ans = play(a, b, c, 0);
    if (ans.first == -1)
    {
        cout << "-1";
    }
    else
    {
        cout << ans.first << " " << ans.second;
    }
    return 0;
}
