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

struct shirt
{
    int val;
    int index;
    shirt(int a, int b)
    {
        val = a;
        index = b;
    }
};

bool operator<(const shirt &a, const shirt &b)
{
    return a.val > b.val;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    set<int> bought;
    priority_queue<shirt> price[4];
    int n;
    cin >> n;
    vi p(n, 0);
    vi a(n, 0);
    vi b(n, 0);
    REP(i,0,n)
        cin >> p[i];
    REP(i,0,n)
        cin >> a[i];
    REP(i,0,n)
        cin >> b[i];
    REP(i,0,n)
    {
        price[a[i]].push(shirt(p[i],i));
        price[b[i]].push(shirt(p[i],i));
    }

    int m;
    cin >> m;
    REP(i, 0, m)
    {
        int foo;
        cin >> foo;
        if (price[foo].empty())
        {
            cout << -1 << " ";
            continue;
        }
        int no = price[foo].top().index;
        while(!price[foo].empty() && present(bought, no))
        {
            price[foo].pop();
            no = price[foo].top().index;
        }

        if (price[foo].empty())
        {
            cout << -1 << " ";
            continue;
        }
        cout << price[foo].top().val << " ";
        bought.insert(no);
        price[foo].pop();
    }
    return 0;
}
