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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int len = INT_MAX;
    for(int i = 0; i < m; ++i)
    {
        int l, r;
        cin >> l >> r;
        len = min(len, r - l + 1);
    }
    cout << len << "\n"; 
    for(int i = 0; i < n; ++i)
    {
        cout << i % len << " ";
    }
    return 0;
}
