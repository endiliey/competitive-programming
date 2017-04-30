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
    priority_queue<int> pq;
    unordered_set<int> u;
    for(int i = 0; i < n; ++i)
    {
        int foo;
        cin >> foo;
        if (!present(u, foo))
        {
            pq.push(foo);
            u.insert(foo);
        }
    }
    int a = pq.top();
    pq.pop();
    while(!pq.empty())
    {
        int val = a - pq.top();
        if (!present(u, val))
        {
            pq.push(val);
            u.insert(val);
        }
        a = pq.top();
        pq.pop();
    }
    int ans = a * n;
    cout << ans;
    return 0;
}
